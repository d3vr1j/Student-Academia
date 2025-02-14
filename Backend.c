// C program for the above approach
#include &lt;math.h&gt;
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;time.h&gt;
// Function to implement the game
int game(char you, char computer)
{
// If both the user and computer
// has choose the same thing
if (you == computer)
return -1;

// If user&#39;s choice is stone and
// computer&#39;s choice is paper
if (you == &#39;s&#39; &amp;&amp; computer == &#39;p&#39;)
return 0;

// If user&#39;s choice is paper and
// computer&#39;s choice is stone
else if (you == &#39;p&#39; &amp;&amp; computer == &#39;s&#39;) return 1;

// If user&#39;s choice is stone and
// computer&#39;s choice is scissor

8 | Page

if (you == &#39;s&#39; &amp;&amp; computer == &#39;z&#39;)
return 1;

// If user&#39;s choice is scissor and
// computer&#39;s choice is stone
else if (you == &#39;z&#39; &amp;&amp; computer == &#39;s&#39;)
return 0;

// If user&#39;s choice is paper and
// computer&#39;s choice is scissor
if (you == &#39;p&#39; &amp;&amp; computer == &#39;z&#39;)
return 0;

// If user&#39;s choice is scissor and
// computer&#39;s choice is paper
else if (you == &#39;z&#39; &amp;&amp; computer == &#39;p&#39;)
return 1;
}
// Driver Code
int main()
{
// Stores the random number
int n;

9 | Page

char you, computer, result;

// Chooses the random number
// every time
srand(time(NULL));

// Make the random number less
// than 100, divided it by 100
n = rand() % 100;

// Using simple probability 100 is
// roughly divided among stone,
// paper, and scissor
if (n &lt; 33)

// s is denoting Stone
computer = &#39;s&#39;;

else if (n &gt; 33 &amp;&amp; n &lt; 66)

// p is denoting Paper
computer = &#39;p&#39;;

10 | Page

// z is denoting Scissor
else
computer = &#39;z&#39;;

printf(&quot;\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t&quot;);

// input from the user
scanf(&quot;%c&quot;, &amp;you);

// Function Call to play the game
result = game(you, computer);

if (result == -1) {
printf(&quot;\n\n\t\t\t\tGame Draw!\n&quot;);
}
else if (result == 1) {
printf(&quot;\n\n\t\t\t\tWow! You have won the game!\n&quot;);
}
else {
printf(&quot;\n\n\t\t\t\tOh! You have lost the game!\n&quot;);
}
printf(&quot;\t\t\t\tYOu choose : %c and Computer choose : %c\n&quot;,you, computer);

11 | Page

return 0;
}
