
namespace WindowsFormsApp1
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.Num1TextBox = new System.Windows.Forms.TextBox();
            this.Num2TextBox = new System.Windows.Forms.TextBox();
            this.ResultButton = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // Num1TextBox
            // 
            this.Num1TextBox.Location = new System.Drawing.Point(92, 90);
            this.Num1TextBox.Name = "Num1TextBox";
            this.Num1TextBox.Size = new System.Drawing.Size(100, 20);
            this.Num1TextBox.TabIndex = 0;
            // 
            // Num2TextBox
            // 
            this.Num2TextBox.Location = new System.Drawing.Point(198, 90);
            this.Num2TextBox.Name = "Num2TextBox";
            this.Num2TextBox.Size = new System.Drawing.Size(100, 20);
            this.Num2TextBox.TabIndex = 1;
            // 
            // ResultButton
            // 
            this.ResultButton.Location = new System.Drawing.Point(157, 136);
            this.ResultButton.Name = "ResultButton";
            this.ResultButton.Size = new System.Drawing.Size(75, 23);
            this.ResultButton.TabIndex = 2;
            this.ResultButton.Text = "Add";
            this.ResultButton.UseVisualStyleBackColor = true;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(329, 96);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(0, 13);
            this.label1.TabIndex = 3;
            this.label1.Click += new System.EventHandler(this.label1_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.ResultButton);
            this.Controls.Add(this.Num2TextBox);
            this.Controls.Add(this.Num1TextBox);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox Num1TextBox;
        private System.Windows.Forms.TextBox Num2TextBox;
        private System.Windows.Forms.Button ResultButton;
        private System.Windows.Forms.Label label1;
    }
}

