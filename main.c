#include <stdio.h>
#include<math.h>
int main()
{
    printf("\t\t\t\tOBSERVED FREQUENCY");
    printf("\n\n\n");
    int l;
    double d,v,c,nu,r;
    float  vz,cosval,x,y;
    
    printf("Velocity of light at source(in km/s):");
    scanf("%f",&vz);
    printf("\nWavelength of light at source(in nm): ");
    scanf("%d",&l);
    printf("\nForward angle of light at source(theta)(in degree): ");
    scanf("%f",&x);
    y = x * (3.142 / 180.0);
    printf("y=%f", y);
    cosval = cos(y);
    printf("\ncosval=%f", cosval);
    c=300000000;
    printf("\nc=%lf", c);
    r=100000;
    printf("\nr=%lf", r);
    nu=pow(-10,9)*6.626;
    printf("\nnu=%lf", nu);
    d=(l*(1-((nu*(-1)*r*r)/c)*(cos(y))))/(1-(nu-(r*r*nu*(-r)*r)/(c*c)));
    v=(vz*(1-((nu*(-1)*r*r*nu*-r*r)/c*c)))/(1-((nu*(-r)*r)/c)*cos(y));
    printf("\nThe wavelength of light at observer is %.lf", d);
    printf("\n\nThe frequency of light at observer is %.lfHz",v);
    return 0;
}