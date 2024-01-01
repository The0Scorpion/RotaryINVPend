m_p = 0.026; %mass of pendulum in KG
r_a = 0.1345; %arm length in m
l_p = 0.132; % length of arm of pendulum in m
J_pendulum = (1/3)*m_p*l_p*l_p;
motor_j = 0.0327;
motor_b = 0.29352; 
m_k = 0.052233; %back emf const
m_resistance = 1.20677778;
J_arm = motor_j;
b_eq = motor_b; 

a =motor_j+(m_p*r_a*r_a);
b=m_p*l_p*r_a;
c=(4/3)*m_p*l_p*l_p;
d=m_p*9.8*l_p;
e=(a*c)-(b*b);

motor_efficiency = 0.95;
gearbox_efficiency = 0.95;
gearbox_ratio = 1; %110 motor -> load
G = ((motor_b*m_resistance)-(motor_efficiency*gearbox_efficiency*m_k*m_k*(gearbox_ratio*gearbox_ratio)))/(m_resistance);
H = (motor_efficiency*gearbox_efficiency*m_k*gearbox_ratio)/(m_resistance*e);

A_mat = [0 0 1 0;0 0 0 1;0 (b*d)/(e) (-(c*G)/e) 0 ; 0 ((a*d)/e) (-b*G)/e 0 ];
B_mat = [0;0; (c)*(H);(b)*(H)];
C_mat = [1 0 0 0 ; 0 1 0 0];

state_space_model= ss(A_mat,B_mat,C_mat,0);
 
q = diag([2 1 90 50]);
r_eq = 30;
ctrb(state_space_model);
[K,S_LQ,eig]=lqr(state_space_model,q,r_eq,0);
syslqr=ss(A_mat-B_mat*K,B_mat,C_mat,0);
PWMBias =35;
PWMSat =255;
display(K);
step(syslqr);

