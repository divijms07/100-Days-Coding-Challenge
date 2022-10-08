import com.mysql.cj.protocol.Resultset;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;


public class MyJDBC {
    public static void main(String[] args) {

        try {


            Connection connection = DriverManager.getConnection("jdbc:mysql://localhost:3306/ams", "root", "oracle@DIVIHA11!@");

            Statement statement = connection.createStatement();

            ResultSet resultSet = statement.executeQuery("select * from doctor");

            while (resultSet.next())
                System.out.println(resultSet.getString("doctor_firstnm"));
        } catch (Exception e) {
                e.printStackTrace();
        }


    }
}
