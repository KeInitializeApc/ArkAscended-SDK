#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementDataStorageCompatibilityInterface
class ITypedElementDataStorageCompatibilityInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementDataStorageCompatibilityInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementDataStorageInterface
class ITypedElementDataStorageInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementDataStorageInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementDataStorageUiInterface
class ITypedElementDataStorageUiInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementDataStorageUiInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementHandleLibrary
class UTypedElementHandleLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class UTypedElementHandleLibrary* GetDefaultObj();

	struct FScriptTypedElementHandle Release();
	struct FScriptTypedElementHandle NotEqual(bool* ReturnValue);
	struct FScriptTypedElementHandle IsSet(bool* ReturnValue);
	struct FScriptTypedElementHandle Equal(bool* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementListLibrary
class UTypedElementListLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class UTypedElementListLibrary* GetDefaultObj();

	struct FScriptTypedElementListProxy Shrink();
	struct FScriptTypedElementListProxy Reset();
	int32 Reserve();
	struct FScriptTypedElementHandle Remove(bool* ReturnValue);
	struct FScriptTypedElementListProxy Num(int32* ReturnValue);
	int32 IsValidIndex(bool* ReturnValue);
	class FName HasElementsOfType(bool* ReturnValue);
	class UClass* HasElements(bool* ReturnValue);
	class UClass* GetElementInterface(class UObject** ReturnValue);
	class UClass* GetElementHandles(TArray<struct FScriptTypedElementHandle>* ReturnValue);
	int32 GetElementHandleAt(struct FScriptTypedElementHandle* ReturnValue);
	int32 Empty();
	class UTypedElementRegistry* CreateScriptElementList(struct FScriptTypedElementListProxy* ReturnValue);
	class FName CountElementsOfType(int32* ReturnValue);
	class UClass* CountElements(int32* ReturnValue);
	struct FScriptTypedElementHandle Contains(bool* ReturnValue);
	struct FScriptTypedElementListProxy Clone(struct FScriptTypedElementListProxy* ReturnValue);
	struct FScriptTypedElementListProxy AppendList();
	TArray<struct FScriptTypedElementHandle> Append();
	struct FScriptTypedElementHandle Add(bool* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementCounterInterface
class ITypedElementCounterInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementCounterInterface* GetDefaultObj();

};

// 0x950 (0x978 - 0x28)
// Class TypedElementFramework.TypedElementRegistry
class UTypedElementRegistry : public UObject
{
public:
	uint8                                        Pad_22CC[0x950];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTypedElementRegistry* GetDefaultObj();

	void GetInstance(class UTypedElementRegistry** ReturnValue);
	class UClass* GetElementInterface(class UObject** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA
class ITestTypedElementInterfaceA : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITestTypedElementInterfaceA* GetDefaultObj();

	bool SetDisplayName(bool* ReturnValue);
	struct FScriptTypedElementHandle GetDisplayName(class FText* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceB
class ITestTypedElementInterfaceB : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITestTypedElementInterfaceB* GetDefaultObj();

	struct FScriptTypedElementHandle MarkAsTested(bool* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceC
class ITestTypedElementInterfaceC : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITestTypedElementInterfaceC* GetDefaultObj();

	struct FScriptTypedElementHandle GetIsTested(bool* ReturnValue);
};

// 0x8 (0x30 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
class UTestTypedElementInterfaceA_ImplTyped : public UObject
{
public:
	uint8                                        Pad_22F0[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTestTypedElementInterfaceA_ImplTyped* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
class UTestTypedElementInterfaceA_ImplUntyped : public UObject
{
public:
	uint8                                        Pad_22F4[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTestTypedElementInterfaceA_ImplUntyped* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
class UTestTypedElementInterfaceBAndC_Typed : public UObject
{
public:
	uint8                                        Pad_22F6[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTestTypedElementInterfaceBAndC_Typed* GetDefaultObj();

};

}


