package Singleton.Java;

/**
 * 懒汉式，线程不安全
 */
// public class SingleObject
// {
//     private static SingleObject instance = new SingleObject();
//     private SingleObject() {

//     }

//     public static SingleObject getInstance() {
//         if (instance == null) {
//             instance = new SingleObject();
//         }
//         return instance;
//     }

//     public void showMessage() {
//         System.out.println("Hello World!");
//     }
// }

/**
 * 懒汉式，线程安全
 */
// public class SingleObject
// {
//     private static SingleObject instance;
//     private SingleObject() {

//     }

//     public static synchronized SingleObject getInstance() {
//         if (instance == null) {
//             return new SingleObject();
//         }
//         return instance;
//     }

//     public void showMessage() {
//         System.out.println("Hello World");
//     }
// }

/**
 * 饿汉式
 */
// public class SingleObject
// {
//     private static SingleObject instance = new SingleObject();
//     private SingleObject() {

//     }

//     public static SingleObject getInstance() {
//         return instance;
//     }

//     public void showMessage() {
//         System.out.println("Hello World");
//     }
// }

/**
 * 双检锁、双重校验锁
 */
public class SingleObject
{
    private volatile static SingleObject instance;
    private SingleObject() {

    }

    public static SingleObject getInstance() {
        synchronized(SingleObject.class) {
            if (instance == null) {
                instance = new SingleObject();
            }
        }
        return instance;
    }

    public void showMessage() {
        System.out.println("Hello World");
    }
}