/***
	美国数学家维纳(N.Wiener)智力早熟，11岁就上了大学。
	他曾在1935~1936年应邀来中国清华大学讲学。 
	一次，他参加某个重要会议，年轻的脸孔引人注目。
	于是有人询问他的年龄，
	他回答说：“我年龄的立方 是个4位数。
	我年龄的4次方是个6位数。
	这10个数字正好包含了从0到9这10个数字，
	每个都恰好出现1次。”
	请你推算一下，他当时到底有多年轻。
	直接提交他那时的年龄数字。
答案：18
思路：通过暴力破解的方法，
	找到年龄的大概范围，
	假设他的年龄为x,10^3=1000, 30^4=8100，
	说明x的范围在[10,30]之间。
***/
#include<stdio.h>
#include<math.h>
int main(){
	int year;
	int i;
	for(i = 10;i<=30;i++){//猜测在10~30间的年龄
		printf("%d %.0f  %.0f\n",i,pow(i,3),pow(i,4));
	} 
	return 0;
} 

