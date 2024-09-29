let buttoncount=0 
totalprice=0
netPrice =0


const PRICE=(RAIHAN)=>{
    buttoncount++ ;
    document.getElementById('total-products').innerText=buttoncount;
    totalprice+=RAIHAN;
    document.getElementById('price').innerText=totalprice;
    deliveryCharge(totalprice);
    netPrice = totalprice;

}
const deliveryCharge =(price)=>{
    DC=0;
    if(price<50000){
        DelC=0
    }
    else if(price>=60000 && price<80000){
       DelC=100
    }
    else if(price>81000 && price<=100000){
        DelC=150
    } else{
       DelC=200
    }
    document.getElementById('delivery-charge').innerText=DC;
    document.getElementById('shipping-total').innerText=DC;
    // console.log(totalprice)
    netPrice += DC + DC;
    // console.log(netPrice)
    Tax()
}
function Tax(){
      const tax = netPrice* 0.15;
      document.getElementById('tax').innerText = tax.toFixed(3);
    //   console.log(tax);
      netPrice += tax;
    //   console.log(netPrice);
      document.getElementById('total').innerText=netPrice.toFixed(3);
}


const order=()=>{
    
    alert('HAKUNU MATATA FOR BUYING MOBILE FROM OUR SHOP\n Your total price: '+ document.getElementById('total').innerText);
}