<h1 class="gap">0x1B. C - Sorting algorithms &amp; Big O</h1>

<img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/248/willy-wonka.png">

<h2>Background Context</h2>
<p>This project is meant to be done by groups of two students. Each group of two should <a href="/rltoken/QcXizPyNa4DTAMLNzCwdHg" title="pair program" target="_blank">pair program</a> for at least the mandatory part.</p>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/NwGzC3ck-xCcOmVIIbZn9Q" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>
<ul>
<li>At least four different sorting algorithms</li>
<li>What is the Big O notation, and how to evaluate the time complexity of an algorithm</li>
<li>How to select the best sorting algorithm for a given input</li>
<li>What is a stable sorting algorithm</li>
</ul>

<h2>More Info</h2>
<h3>Data Structure and Functions</h3>
<ul>
<li>For this project you are given the following <code>print_array</code>, and <code>print_list</code> functions:</li>
</ul>

<pre><code>#include &lt;stdlib.h&gt;
#include &lt;stdio.h&gt;

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array &amp;&amp; i &lt; size)
    {
        if (i &gt; 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
</code></pre>

<pre><code>#include &lt;stdio.h&gt;
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)sss
{
    int i;

    i = 0;
    while (list)
    {
        if (i &gt; 0)
            printf(", ");
        printf("%d", list-&gt;n);
        ++i;
        list = list-&gt;next;
    }
    printf("\n");
}
</code></pre>