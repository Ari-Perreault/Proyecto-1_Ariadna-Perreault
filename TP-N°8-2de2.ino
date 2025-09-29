#define NOTE_C3  131
#define NOTE_D3  147
#define NOTE_E3  165
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392

const int BPM = 110;
const int BUZZER_PIN = 9;
const unsigned long LOOP_PAUSE_MS = 2000;

int melodyNotes[] = {
  NOTE_C3, NOTE_C3, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_A3, NOTE_G3, 0,
  NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4, NOTE_C3,
  NOTE_E3, NOTE_G3, NOTE_C4, NOTE_C3, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_A3,
  NOTE_G3, 0, NOTE_E3, NOTE_E3, NOTE_D3, NOTE_D3, NOTE_C3, NOTE_C3
};
int melodyFigures[] = {
  8,8,8,8,8,8,4,-4,
  8,8,8,8,8,8,4,8,
  8,8,8,8,8,8,8,8,
  4,-8,8,8,8,8,4,8
};
const int lenMelody = sizeof(melodyNotes)/sizeof(melodyNotes[0]);

unsigned long figureDurationMs(int figure) {
  int f = abs(figure);
  return (unsigned long)(480000UL / ((unsigned long)BPM * (unsigned long)f));
}

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  for (int i = 0; i < lenMelody; i++) {
    int note = melodyNotes[i];
    int fig  = melodyFigures[i];
    unsigned long dur = figureDurationMs(fig);
    if (note == 0) {
      delay(dur);
    } else {
      tone(BUZZER_PIN, note, dur * 90 / 100);
      delay(dur);
      noTone(BUZZER_PIN);
    }
  }
  delay(LOOP_PAUSE_MS);
}
