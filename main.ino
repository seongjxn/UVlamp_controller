int sw_120s=2, sw_30s_up=3, sw_start=4, sw_reset=5;
int led=6;

int timeset=0;

boolean time_plus=0, start=0;

void setup() {
  pinMode(sw_120s, INPUT_PULLUP); 
  pinMode(sw_30s_up, INPUT_PULLUP); 
  pinMode(sw_start, INPUT_PULLUP); 
  pinMode(sw_reset, INPUT_PULLUP);

  pinMode(led, OUTPUT);

  Serial.begin(9600);
  
}

void loop() {
  if(digitalRead(sw_120s)==0){
    if(time_plus==0){
      time_plus=1;
      set_time_plus();
    }
  }
  if(digitalRead(sw_30s_up)==1){
    time_plus=1;
  }

  Serial.print(timeset)
}

void set_time_plus() {
  time += 30;
}

void Start() {
  if(timeset!=0){
    digitalWrite(led, HIGH);
    
    
    if(timeset==0){
      digitalWrite(led, LOW);
    }
  }
}
