package client;

import java.awt.GridBagConstraints;
import java.awt.GridBagLayout;
import java.awt.Insets;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.URL;
import java.net.URLConnection;
import java.util.Vector;

import javax.swing.JApplet;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JList;
import javax.swing.JTextField;

import sResultSet.SerializedResultSet;

public class AppletFind extends JApplet {
	private JTextField textNom;
	private JList listeResultat;

	/**
	 * Create the applet.
	 */
	public AppletFind() {
		GridBagLayout gridBagLayout = new GridBagLayout();
		gridBagLayout.columnWidths = new int[]{0, 0, 0, 0};
		gridBagLayout.rowHeights = new int[]{0, 0, 0, 0, 0, 0};
		gridBagLayout.columnWeights = new double[]{0.0, 0.0, 1.0, Double.MIN_VALUE};
		gridBagLayout.rowWeights = new double[]{0.0, 0.0, 0.0, 0.0, 1.0, Double.MIN_VALUE};
		getContentPane().setLayout(gridBagLayout);
		
		JLabel lblNom = new JLabel("Nom :");
		GridBagConstraints gbc_lblNom = new GridBagConstraints();
		gbc_lblNom.insets = new Insets(0, 0, 5, 5);
		gbc_lblNom.anchor = GridBagConstraints.EAST;
		gbc_lblNom.gridx = 1;
		gbc_lblNom.gridy = 1;
		getContentPane().add(lblNom, gbc_lblNom);
		
		textNom = new JTextField();
		GridBagConstraints gbc_textNom = new GridBagConstraints();
		gbc_textNom.insets = new Insets(0, 0, 5, 0);
		gbc_textNom.fill = GridBagConstraints.HORIZONTAL;
		gbc_textNom.gridx = 2;
		gbc_textNom.gridy = 1;
		getContentPane().add(textNom, gbc_textNom);
		textNom.setColumns(10);
		
		JButton boutonRechercher = new JButton("Recherche");
		boutonRechercher.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				Rechercher();
			}
			
			private void Rechercher() {
				String res;
				String nom=textNom.getText();
				try
				{
					// Connexion à la servlet
					URL url=new URL("http://localhost:8080/TDn1/req");
					URLConnection connexion=url.openConnection();
					connexion.setDoOutput(true);
					// Récupération du flux de sortie
					ObjectOutputStream fluxsortie = new ObjectOutputStream(connexion.getOutputStream());
					// Envoi du nom à rechercher
					fluxsortie.writeObject(nom);
					// Récupération du flux d’entrée
					ObjectInputStream fluxentree = new ObjectInputStream(connexion.getInputStream());
					// Récupération du résultat de la requête
					SerializedResultSet donnees=(SerializedResultSet) fluxentree.readObject();
					// affichage du résultat
					donnees.first();
					Vector<String> contenu=new Vector<String>();
					contenu.clear();
					listeResultat.setListData(contenu);
					for (int i=0; i<donnees.recordCount();i++)
					{
						res=donnees.getString("nom")+" "+donnees.getString("prenom");
						contenu.addElement(res);
						donnees.next();
					}
					if (donnees.recordCount()==0) 
						{
						res="Pas de personne correspondante";
						contenu.addElement(res);
						}
					listeResultat.setListData(contenu);
					
				}
				catch (Exception sql)
				{
					System.out.println("erreur "+sql);
				}
				
			}
			
		});
		GridBagConstraints gbc_boutonRechercher = new GridBagConstraints();
		gbc_boutonRechercher.insets = new Insets(0, 0, 5, 5);
		gbc_boutonRechercher.gridx = 1;
		gbc_boutonRechercher.gridy = 2;
		getContentPane().add(boutonRechercher, gbc_boutonRechercher);
		
		listeResultat = new JList();
		GridBagConstraints gbc_listeResultat = new GridBagConstraints();
		gbc_listeResultat.gridheight = 2;
		gbc_listeResultat.gridwidth = 3;
		gbc_listeResultat.fill = GridBagConstraints.BOTH;
		gbc_listeResultat.gridx = 0;
		gbc_listeResultat.gridy = 3;
		getContentPane().add(listeResultat, gbc_listeResultat);

	}

}
