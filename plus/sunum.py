import sys
import time
import subprocess  # mmo.sh script'ini arkada çalıştırmak için gerekli kütüphane

# Renkler
YESIL = '\033[0;32m'
BEYAZ = '\033[0;37m'
RENKSIZ = '\033[0m'
MAVI = '\033[0;34m'
SARI = '\033[0;33m'

def apt_log(metin, gecikme=0.5):
    """Standart APT çıktıları için temiz bir log basar."""
    sys.stdout.write(metin)
    sys.stdout.flush()
    time.sleep(gecikme)

def apt_ilerleme_bar(paket_adi, yildiz_sayisi=20, bekleme=0.15):
    """APT paket yükleme ve açma esnasındaki ilerleme çubuğu simülasyonu."""
    for i in range(1, yildiz_sayisi + 1):
        yuzde = int((i / yildiz_sayisi) * 100)
        yildizlar = "*" * i
        bosluklar = " " * (yildiz_sayisi - i)
        
        # Unpacking standardı tam olarak uygulandı
        sys.stdout.write(f"\r{YESIL}Unpacking: {paket_adi} ({yuzde}%) [{yildizlar}{bosluklar}]{RENKSIZ}")
        sys.stdout.flush()
        time.sleep(bekleme)
    print(f" {YESIL}[ Done ]{RENKSIZ}")

# --- APT OPERASYONU BAŞLIYOR ---
print(f"{BEYAZ}Stux6@)786GHJG09H64 $~ sudo stux install github.com/Stux6-Technology/StuxNet{RENKSIZ}")
time.sleep(0.5)
print(f"{BEYAZ}Stux6@)786GHJG09H64 $~ sudo stux install alperenerkan.com/Secret/Root/SYS/STUXNET-php%%0==1/root/jkdsjkhw87s6d87bs6{RENKSIZ}")
time.sleep(0.5)
print(f"[sudo] password for Stux6 Computer System: *************************")
time.sleep(0.8)

apt_log("Reading package lists... ")
print(f"{YESIL}Done{RENKSIZ}")

apt_log("Building dependency tree... ")
print(f"{YESIL}Done{RENKSIZ}")

apt_log("Reading state information... ")
print(f"{YESIL}Done{RENKSIZ}")
time.sleep(0.4)

print(f"\nThe following additional packages will be installed:")
print(f"  {MAVI}gnu-hurd-kernel-core i2p-crypto-tunnel-node siemens-s7-300-sim-driver{RENKSIZ}")
print(f"The following NEW packages will be installed:")
print(f"  {MAVI}stuxnet-core-modules-havelsan gnu-hurd-kernel-core i2p-crypto-tunnel-node siemens-s7-300-sim-driver{RENKSIZ}")
print("0 upgraded, 4 newly installed, 0 to remove and 12 not upgraded.")
print("Need to get 64.40GB of archives.")
print("After this operation, 1,725,639 lines of code space will be used.")
time.sleep(1.5)

# Paketlerin İndirilme Logları
print(f"\nGet:1 http://repository.stux6.tech/neox stable/main gnu-hurd-kernel-core [21.4GB]")
time.sleep(0.6)
print(f"Get:2 http://repository.stux6.tech/neox stable/main i2p-crypto-tunnel-node [8GB]")
time.sleep(0.5)
print(f"Get:3 http://repository.stux6.tech/neox stable/main siemens-s7-300-sim-driver [21.0GB]")
time.sleep(0.4)
print(f"Get:4 http://repository.stux6.tech/neox stable/main stuxnet-core-modules-havelsan [32.0GB]")
print(f"Fetched 64.40 GB in 13s (512.1 MB/s)")
time.sleep(1)

print("Selecting previously unselected package gnu-hurd-kernel-core.")
print("(Reading database ... 284715 files and directories currently installed.)")
time.sleep(0.5)

# Sıra Sıra Yüklenen Paketler
apt_ilerleme_bar("gnu-hurd-kernel-core", yildiz_sayisi=15, bekleme=0.1)
apt_ilerleme_bar("i2p-crypto-tunnel-node", yildiz_sayisi=20, bekleme=0.1)
apt_ilerleme_bar("siemens-s7-300-sim-driver", yildiz_sayisi=12, bekleme=0.15)
apt_ilerleme_bar("stuxnet-core-modules-havelsan", yildiz_sayisi=25, bekleme=0.08)

time.sleep(0.5)
print(f"\n{YESIL}[+] All NeOx OS Hypervisor dependencies resolved successfully.{RENKSIZ}")
print(f"{YESIL}[+] Stuxnet simulation target environment is ready for operational deployment.{RENKSIZ}")
time.sleep(1)

# --- İSTEDİĞİN OTOMATİK GEÇİŞ KATMANI ---
print(f"{SARI}[*] Running mma.sh...{RENKSIZ}")
time.sleep(1.5)

try:
    # Python, mmo.sh script'ini otomatik olarak tetikler ve terminal kontrolünü ona devreder
    subprocess.run(["/bin/bash", "mma.sh"])
except FileNotFoundError:
    print(f"\033[0;31m[!] Error: Stux6/StuxNet/plus/mma.sh file not found!\033[0m")