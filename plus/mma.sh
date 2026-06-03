#!/bin/bash

# Renk Tanımlamaları (Mac ve Linux uyumlu ham escape karakterleri ile)
KIRMIZI=$(echo -e '\033[0;31m')
YESIL=$(echo -e '\033[0;32m')
SARI=$(echo -e '\033[0;33m')
MAVI=$(echo -e '\033[0;34m')
MOR=$(echo -e '\033[0;35m')
TURKUAZ=$(echo -e '\033[0;36m')
BEYAZ=$(echo -e '\033[0;37m')
RENKSIZ=$(echo -e '\033[0m')

# NOSTALJİK EFEKT FONKSIONU: Renkleri bozmadan daktilo efekti verir

daktilo_yaz() {
    local renk="$1"
    local metin="$2"
    local gecikme=0. # Hız sunum için optimize edildi (0.03 saniye)
    
    # Rengi başta bir kez uygula
    echo -ne "${renk}"
    
    # Metni karakter karakter bas
    for (( i=0; i<${#metin}; i++ )); do
        echo -ne "${metin:$i:1}"
        sleep $gecikme
    done
    
    # Satır sonunda rengi sıfırla ve yeni satıra geç
    echo -e "${RENKSIZ}"
}
# Kullanıcıdan girdi isteme satırı
read -p "${YESIL}Starting Stuxnet system (Press T to start): ${RENKSIZ}" output

# ÇOKLU GİRDİ KONTROLÜ: Girdiyi tamamen küçük harfe çeviriyoruz
output_lower=$(echo "$output" | tr '[:upper:]' '[:lower:]')

if [[ "$output_lower" == "t" || "$output_lower" == "yes" || "$output_lower" == "y" || "$output_lower" == "true" ]]; then 
    echo -e "${TURKUAZ}==========================================================${RENKSIZ}"
    echo -e "${TURKUAZ}=                        STUXNET                         =${RENKSIZ}"
    echo -e "${TURKUAZ}==========================================================${RENKSIZ}"
    sleep 0.8
    echo "=                                                        ="
    sleep 0.8
    echo -e "=          ${TURKUAZ}Copyright (c) 2026 Stux6 Technology${TURKUAZ}         ="        
    sleep 0.8                    
    echo "=                                                        ="
    sleep 0.8
    echo -e "${TURKUAZ}==========================================================${RENKSIZ}"
    echo ""
    sleep 1
    
    # DAKTİLO EFEKTİ KULLANIMI: daktilo_yaz "RENK" "METİN"
    daktilo_yaz "$YESIL" "[*] Linux system running..."
    sleep 1
    daktilo_yaz "$YESIL" "[*] The Windows system is being analysed..."
    sleep 1.5
    daktilo_yaz "$YESIL" "[*] Running code... "
    sleep 1
    daktilo_yaz "$YESIL" "[!] Stuxnet: System Ready..."
    sleep 0.8
    daktilo_yaz "$YESIL" "[*] Stuxnet: Input is expected..."
    sleep 0.8
    daktilo_yaz "$YESIL" "[*] OS Version: MacOS X 12.7.6"
    sleep 0.8
    daktilo_yaz "$YESIL" "[*] User info: Alperen -> Root"
    sleep 0.8
    
    daktilo_yaz "$YESIL" "[*] Docker: Firewall stop..."
    sleep 0.4
    daktilo_yaz "$YESIL" "[*] Docker: Linux Kernel Running..."
    sleep 0.4
    daktilo_yaz "$YESIL" "[*] Docker: Linux Firewall start..."
    sleep 0.6
    daktilo_yaz "$YESIL" "[*] Docker: OS Version -> NeOx 6.0.64 Alpha - Havelsan Edition"
    sleep 0.6
    daktilo_yaz "$YESIL" "[*] Docker: Sys Size: 6GB RAM - 4 Cores"
    sleep 0.6
    daktilo_yaz "$YESIL" "[*] Docker: 0x000000 - 0x000000 - 0x000000 - 0x000000"
    sleep 0.3
    daktilo_yaz "$YESIL" "[*] Docker: 0x400000 - 0xF3FFA0 - 0x6000A9 - 0x777A7C"
    sleep 0.3
    daktilo_yaz "$YESIL" "[*] Docker: 0xFFA56A - 0x000000 - 0x000000 - 0x3F0000"
    sleep 0.8
    
    daktilo_yaz "$YESIL" "[*] Siemens: PLC name/version -> Siemens PLC S7-300"
    daktilo_yaz "$YESIL" "[*] Siemens: .NET simulation is running..."
    daktilo_yaz "$YESIL" "[*] Siemens: success"
    sleep 0.8
    daktilo_yaz "$SARI" "[*] Stuxnet starting..."
    sleep 1.5
    daktilo_yaz "$TURKUAZ" "[!] Stuxnet: Device not detected... System is shutting down..."
    sleep 2
    exit
else
    # Hata ekranı
    echo -e "${MOR}[!] System didn't start.${RENKSIZ}"
    echo -e "${MOR}[*] Please contact Stux6 Technology Team${RENKSIZ}"
    echo -e "${MOR}[*] contact: +90 (551) 981 4849${RENKSIZ}"
fi