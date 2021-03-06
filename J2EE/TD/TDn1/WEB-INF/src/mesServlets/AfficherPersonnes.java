package mesServlets;

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.Statement;

import javax.naming.Context;
import javax.naming.InitialContext;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.sql.DataSource;

public class AfficherPersonnes extends HttpServlet {

	Connection BD;
	DataSource ds;
	
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		try {
			BD=ds.getConnection();
			Statement s = BD.createStatement();
			ResultSet r = s.executeQuery("select * from personne");
			PrintWriter out=null;
			resp.setContentType("text/html");
			out = resp.getWriter();
			out.println("<html>");
			out.println("<head><title> Test servlet </title></head>");
			out.println("<body>");
			out.println("Contenu de la table personne <BR>");
			out.println("<table>");
			out.println("<TR>");
			out.println("<TD>Nom</TD>");
			out.println("<TD>Pr�nom</TD>");
			out.println("</TR>");
			while (r.next()) {
				out.println("<TR>");
				out.println("<TD>");
				out.println(r.getString("nom"));
				out.println("</TD>");
				out.println("<TD>");
				out.println(r.getString("prenom"));
				out.println("</TD>");
				out.println("</TR>");
				}
			out.println("</table>");
			out.println("</body>");
			out.println("</html>");
			r.close();
			s.close();
			BD.close();
			s = null;
			r = null;
		} catch (java.sql.SQLException ex) {
			System.out.println("Erreur d'ex�cution de la requ�te SQL \n"+ex);
		}
	}

	@Override
	public void init() throws ServletException {
		try {
			System.out.println("R�cup�ration du contexte");
			Context initCtx = new InitialContext();
			System.out.println("lookup de env");
			Context envCtx = (Context) initCtx.lookup("java:comp/env");
			System.out.println("lookup de MaBase");
			ds=(DataSource) envCtx.lookup("MaBase");
			System.out.println("Datasource charg�e");
			}
			catch(Exception er) {
				System.out.println("Erreur de chargement du contexte " + er);
			}
	}

}
