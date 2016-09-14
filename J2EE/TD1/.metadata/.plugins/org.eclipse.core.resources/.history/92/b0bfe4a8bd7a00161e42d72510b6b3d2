package mesServlets;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class ServletTxt extends HttpServlet {

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		
		PrintWriter out=null;
		resp.setContentType("text/html");
		out=resp.getWriter();
		out.println("<html>");
		out.println("<head><title>Test de servlet</title></head>");
		out.println("<body>");
		out.println("Affichage de contenu dans une page web");
		out.println("</body>");
		out.println("</html>");
		
	}

}