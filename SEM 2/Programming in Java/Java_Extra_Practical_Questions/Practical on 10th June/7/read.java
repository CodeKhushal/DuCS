/*
  Write a program to read a file and display only those lines that have the first two characters
  as ‘//’ (Use try with resources).
 */
package com.company;

import java.io.*;
import java.util.*;
public class read {
    public static void main(String[] args) {
        if (args.length != 1) {
            System.err.println("Usage: java Read <src>");
        } else {
            try (Scanner in = new Scanner(new File(args[0]))) {
                while ( in .hasNext()) {
                    String str = in .nextLine();
                    if (str.substring(0, 2).equals("//"))
                        System.out.println(str);
                }
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
}
