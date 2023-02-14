using System;
using System.Text;
class HelloWorld {
    private const string SECRET_KEY = "bhVDLWfSBWureNR3";
    private const byte XOR = 100;
    
    private static string GenerateEncryptionKey(string secret_key, byte xor) {
        char[] result = secret_key.ToCharArray();
        for (int i = 0; i < secret_key.Length; i++) {
            char c = secret_key[i];
            byte b = System.Convert.ToByte(c);
            char newc = System.Convert.ToChar((uint)xor << ((byte)i & 1) ^ b & 0xff);
            result[i] = newc;
        }
        return new string(result);
    }
    
    private static byte[] GenerateBytes(string password, int length) {
        Encoding utf8 = Encoding.UTF8;
        byte[] bytes = utf8.GetBytes(password);
        byte[] result = new byte[length];
        for (int i = 0; i < length; i++) {
            result[i] = bytes[i];
        }
        return result;
    }
    
    static void Main() {
        string password = GenerateEncryptionKey(SECRET_KEY, XOR);
        foreach (char c in password) {
            Console.Write(System.Convert.ToInt32(c));
            Console.Write(' ');
        }
        Console.WriteLine();
        byte[] result = GenerateBytes(password, 16);
        foreach (byte b in result) {
            Console.Write(System.Convert.ToInt32(b));
            Console.Write(", ");
        }
        Console.WriteLine();
    }
}