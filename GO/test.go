package main

import ("fmt")

type point struct{
	x int
	y int
}

func fizzbuzz(x int){
	if x%3==0 && x%5==0{
		fmt.Println("fizzbuzz")
	}else if x%5==0{
		fmt.Println("buzz")
	}else if x%3==0{
		fmt.Println("fizz")
	}else {fmt.Println(x)}
}

func pointSum(p *point){
	p.x=p.x+p.y
}

func main() {

/*	var x int
	x+=1
	a:=[]string {"abc","def","ghi"}	
	fmt.Printf("%v\n",a[0])
	for j,i:= range a{
		fmt.Println(j ,i)
	}
*/
	p:=&point{1,2}
	fmt.Println(p.x)
	pointSum(p)
	fmt.Println(p.x)
	i:=10
	sum(&i)

	fmt.Println(i)
}	

func sum(a *int){
	*a+=5
}