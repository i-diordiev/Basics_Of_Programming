using System;
using Business;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void ResultButton_Click(object sender, EventArgs e)
        {
            int num1 = Convert.ToInt32(Num1TextBox.Text);
            int num2 = Convert.ToInt32(Num2TextBox.Text);
            int sum;
            sum = Arithmetic.Addition(num1, num2);

        }
    }
}
