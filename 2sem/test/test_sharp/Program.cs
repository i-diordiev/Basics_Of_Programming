using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace srm4
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] massiv = { 2, 1, 4, 5, 3 };
            int cnt = 0;
            Merge_Sort(massiv, ref cnt);
            Console.WriteLine(cnt);

        }

        public static int[] Merge_Sort(int[] arr, ref int counter)
        {
            if (arr.Length == 1)
                return arr;
            int mid_point = arr.Length / 2;
            int[] a;


            Merge(Merge_Sort(arr.Take(mid_point).ToArray(), ref counter), Merge_Sort(arr.Skip(mid_point).ToArray(), ref counter), out a, ref counter);
            return a;
        }

        public static void Merge(int[] mass1, int[] mass2, out int[] merged, ref int counter)
        {
            int a = 0, b = 0;
            merged = new int[mass1.Length + mass2.Length];
            for (int i = 0; i < mass1.Length + mass2.Length; i++)
            {
                if (b < mass2.Length && a < mass1.Length)
                    if (mass1[a] > mass2[b])
                    {
                        merged[i] = mass2[b++];
                        counter = counter + (mass1.Length - a);
                    }
                    else //if int go for 
                    {
                        merged[i] = mass1[a++];
                    }
                else
                    if (b < mass2.Length)
                {
                    merged[i] = mass2[b++];
                }
                else
                {
                    merged[i] = mass1[a++];
                }
            }
        }
    }
}
