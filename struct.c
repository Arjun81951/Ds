#include &lt;stdio.h&gt;

struct Distance {
int feet;
int inches;
};

struct Distance addDistances(struct Distance d1, struct Distance d2) {
struct Distance result;

// Add the inches
result.inches = d1.inches + d2.inches;

// Check for carry-over
if (result.inches &gt;= 12) {
result.inches -= 12;
result.feet = d1.feet + d2.feet + 1; // Add 1 to the feet if there&#39;s a carry-over
} else {
result.feet = d1.feet + d2.feet;
}

return result;
}

int main() {
struct Distance distance1, distance2, sum;

// Input the first distance
printf(&quot;Enter the first distance (feet inches): &quot;);

scanf(&quot;%d %d&quot;, &amp;distance1.feet, &amp;distance1.inches);

// Input the second distance
printf(&quot;Enter the second distance (feet inches): &quot;);
scanf(&quot;%d %d&quot;, &amp;distance2.feet, &amp;distance2.inches);

// Add the distances using the addDistances function
sum = addDistances(distance1, distance2);

// Display the result
printf(&quot;Sum of distances: %d feet %d inches\n&quot;, sum.feet, sum.inches);

return 0;
}
