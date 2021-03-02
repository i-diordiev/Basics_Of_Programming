using System;

namespace lab2_sharp
{
    class Program
    {
        static void Main()
        {
            Console.WriteLine("C# Lab #1");
            Console.WriteLine("IS-03 Diordiev Ivan");
            Console.WriteLine("2 variant");

            Console.WriteLine("Enter number of strings: ");
            int text_size = int.Parse(Console.ReadLine());

            Text MyText = new Text(text_size);
            for (int i = 0; i < text_size; i++)
            {
                Console.WriteLine("Enter string: ");
                string current = Console.ReadLine();
                MyText.AddString(current);
            }
            Console.WriteLine("\nSource text is:\n" + MyText.GetText());
            Console.WriteLine("\nSetting up first letters to uppercase\n");
            MyText.SetUpperForFirstLetter();
            Console.WriteLine(MyText.GetText());

            Console.WriteLine("Enter number of string to remove: ");
            int pos_to_remove = Convert.ToInt32(Console.ReadLine());
            pos_to_remove--;
            MyText.RemoveString(pos_to_remove);
            Console.WriteLine("\nText after removing string: \n" + MyText.GetText());

            Console.WriteLine("\nEnter word to remove a string with this word: \n");
            string key = Console.ReadLine();
            MyText.FindAndRemoveString(key);
            Console.WriteLine("\nText after removing string: \n" + MyText.GetText());

            Console.WriteLine("Length of the longest string: " + Convert.ToString(MyText.GetLengthOfLongest()));
            Console.WriteLine("Clearing text");
            MyText.ClearText();
        }
    }

    class Text
    {
        static private int _size = 0;
        private int _last_string = 0;
        public MyString[] _text;


        public Text(int size)
        {
            _size = size;
            _text = new MyString[_size];
            for (int i = 0; i < _size; i++)
            {
                _text[i] = new MyString();
            }
        }
        
        public void AddString(string str)
        {
            _text[_last_string].SetString(str);
            _last_string++;
        }

        public void RemoveString(int pos)
        {
            for (int i = pos; i < _size - 1; i++)
            {
                _text[i] = _text[i + 1];
            }
            _size--;
        }

        public string GetText()
        {
            string text = "";
            for (int i = 0; i < _size; i++)
            {
                text += _text[i].GetString();
                text += "\n";
            }
            return text;

        }

        public void FindAndRemoveString(string str)
        {
            for (int i =0; i < _size; i++)
            {
                if (_text[i].GetString().Contains(str))
                {
                    RemoveString(i);
                }
            }
        }

        public void ClearText()
        {
            for (int i = 0; i < _size; i++)
            {
                _text[i].SetString("");
            }
            _size = 0;
        }

        public int GetLengthOfLongest()
        {
            int len = 0;
            for (int i = 0; i < _size; i++)
            {
                if (_text[i].GetLenght() > len)
                {
                    len = _text[i].GetLenght();
                }
            }
            return len;
        }

        public void SetUpperForFirstLetter()
        {
            for (int i = 0; i < _size; i++)
            {
                _text[i].SetUpperFirst();
            }
        }
    }

    class MyString
    {
        private string _string;
        public MyString() { }
        public void SetString(string str)
        {
            _string = str;
        }

        public int GetLenght()
        {
            return _string.Length;
        }

        public string GetString()
        {
            return _string;
        }

        public void SetUpperFirst()
        {
            _string = _string.Substring(0, 1).ToUpper() + _string.Substring(1, _string.Length - 1);
        }
    }
}
