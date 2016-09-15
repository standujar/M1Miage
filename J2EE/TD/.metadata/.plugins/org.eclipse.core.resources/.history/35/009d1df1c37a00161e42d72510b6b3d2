package mesServlets;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class ServletTxt extends HttpServlet {

	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {

		PrintWriter out = null;
		resp.setContentType("text/html");
		out = resp.getWriter();
		out.println("<html>");
		out.println("<head><title>Test de servlet</title></head>");
		out.println("<body>");
		out.println("<i>Test</i> Servlet <u>affichage de <b>text</b></u>");
		out.println("</body>");
		out.println("</html>");

	}

}