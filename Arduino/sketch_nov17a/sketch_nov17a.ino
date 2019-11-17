#include <SD.h>

File root;
void setup()
{
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  SD.begin(10);
  root = SD.open("/");
  printDirectory(root, 0);
  delay(2000);
  Serial.println();
  Serial.println("Rewinding, and repeating below:" );
  Serial.println();
  delay(2000);
  root.rewindDirectory();
  printDirectory(root, 0);
  root.close();
}

void loop()
{
  // nothing happens after setup finishes.
}

void printDirectory(File dir, int numTabs)
{
  while (true)
  {
    File entry = dir.openNextFile();
    if (! entry)
    {
      if (numTabs == 0)
        Serial.println("** Done **");
      return;
    }
    for (uint8_t i = 0; i < numTabs; i++)
      Serial.print('\t');
    Serial.print(entry.name());
    if (entry.isDirectory())
    {
      Serial.println("/");
      printDirectory(entry, numTabs + 1);
    }
    else
    {
      Serial.print("\t\t");
      Serial.println(entry.size(), DEC);
    }
    entry.close();
  }
}
