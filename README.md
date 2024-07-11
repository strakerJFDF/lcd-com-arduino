**Projeto: Comunicação I²C com Arduino**

---

### Descrição
Este projeto demonstra como configurar e usar a comunicação I²C (Inter-Integrated Circuit) em um Arduino. O I²C é um protocolo serial de comunicação utilizado para conectar microcontroladores a dispositivos periféricos com apenas dois fios: um para dados (SDA) e outro para clock (SCL). 

### Funcionalidades
- **Configuração Básica:** Configuração do Arduino como mestre I²C.
- **Comunicação com Dispositivos:** Exemplo de comunicação com dispositivos periféricos compatíveis com I²C, como sensores, displays, EEPROMs, entre outros.
- **Leitura e Escrita:** Exemplos de como ler e escrever dados usando o protocolo I²C.

### Componentes Necessários
- Arduino Uno (ou qualquer outro modelo compatível)
- Breadboard
- Fios jumper
- Dispositivos I²C compatíveis (por exemplo, sensor de temperatura, display OLED, EEPROM)

### Instruções de Uso

1. **Conexão Física:**
   - Conecte o Arduino ao dispositivo I²C utilizando os pinos SDA (A4 no Arduino Uno) e SCL (A5 no Arduino Uno).
   - Certifique-se de alimentar ambos os dispositivos adequadamente.

2. **Configuração no Arduino:**
   - Inclua a biblioteca Wire.h no seu código Arduino.
   - Inicie a comunicação I²C com `Wire.begin()`.
   - Defina o endereço do dispositivo escravo (se aplicável) com `Wire.beginTransmission(endereco)`.

3. **Comunicação I²C:**
   - Use `Wire.write()` para enviar dados para o dispositivo escravo.
   - Utilize `Wire.requestFrom(endereco, quantidade)` para solicitar dados do dispositivo escravo.
   - Leia os dados recebidos com `Wire.read()`.

4. **Exemplos de Código:**
   ```cpp
   #include <Wire.h>

   void setup() {
       Wire.begin(); // Inicia o barramento I2C
       Serial.begin(9600); // Inicia a comunicação serial para debug
   }

   void loop() {
       Wire.beginTransmission(8); // Endereço do dispositivo escravo
       Wire.write("Hello"); // Envia dados para o dispositivo
       Wire.endTransmission(); // Finaliza a transmissão

       delay(500);

       Wire.requestFrom(8, 6); // Solicita 6 bytes do dispositivo escravo
       while (Wire.available()) { // Lê os dados recebidos
           char c = Wire.read();
           Serial.print(c);
       }
       Serial.println();

       delay(500);
   }
   ```

5. **Depuração e Ajustes:**
   - Utilize mensagens de depuração serial (`Serial.print()`, `Serial.println()`) para verificar o fluxo de dados.
   - Verifique a documentação específica do dispositivo I²C que você está utilizando para entender melhor como interagir com ele.

### Considerações Finais
Este projeto serve como uma introdução prática à comunicação I²C com Arduino. Experimente conectar diferentes dispositivos periféricos I²C e explore as possibilidades de interação entre eles. Ajuste o código conforme necessário para atender aos requisitos específicos do seu projeto.

--- 

