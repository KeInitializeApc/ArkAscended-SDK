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

	void Release(struct FScriptTypedElementHandle* ElementHandle);
	void NotEqual(struct FScriptTypedElementHandle* LHS, struct FScriptTypedElementHandle* RHS, bool ReturnValue);
	void IsSet(struct FScriptTypedElementHandle* ElementHandle, bool ReturnValue);
	void Equal(struct FScriptTypedElementHandle* LHS, struct FScriptTypedElementHandle* RHS, bool ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementListLibrary
class UTypedElementListLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class UTypedElementListLibrary* GetDefaultObj();

	void Shrink(struct FScriptTypedElementListProxy* ElementList);
	void Reset(struct FScriptTypedElementListProxy* ElementList);
	int32 Reserve(struct FScriptTypedElementListProxy* ElementList);
	void Remove(struct FScriptTypedElementListProxy* ElementList, struct FScriptTypedElementHandle* ElementHandle, bool ReturnValue);
	void Num(struct FScriptTypedElementListProxy* ElementList, int32 ReturnValue);
	void IsValidIndex(struct FScriptTypedElementListProxy* ElementList, int32* Index, bool ReturnValue);
	void HasElementsOfType(struct FScriptTypedElementListProxy* ElementList, class FName* ElementTypeName, bool ReturnValue);
	void HasElements(struct FScriptTypedElementListProxy* ElementList, class UClass** BaseInterfaceType, bool ReturnValue);
	void GetElementInterface(struct FScriptTypedElementListProxy* ElementList, struct FScriptTypedElementHandle* ElementHandle, class UClass** BaseInterfaceType, class UObject* ReturnValue);
	void GetElementHandles(struct FScriptTypedElementListProxy* ElementList, class UClass** BaseInterfaceType, const TArray<struct FScriptTypedElementHandle>& ReturnValue);
	void GetElementHandleAt(struct FScriptTypedElementListProxy* ElementList, int32* Index, const struct FScriptTypedElementHandle& ReturnValue);
	void Empty(struct FScriptTypedElementListProxy* ElementList, int32* Slack);
	void CreateScriptElementList(class UTypedElementRegistry** Registry, const struct FScriptTypedElementListProxy& ReturnValue);
	void CountElementsOfType(struct FScriptTypedElementListProxy* ElementList, class FName* ElementTypeName, int32 ReturnValue);
	void CountElements(struct FScriptTypedElementListProxy* ElementList, class UClass** BaseInterfaceType, int32 ReturnValue);
	void Contains(struct FScriptTypedElementListProxy* ElementList, struct FScriptTypedElementHandle* ElementHandle, bool ReturnValue);
	void Clone(struct FScriptTypedElementListProxy* ElementList, const struct FScriptTypedElementListProxy& ReturnValue);
	void AppendList(struct FScriptTypedElementListProxy* ElementList, struct FScriptTypedElementListProxy* OtherElementList);
	void Append(struct FScriptTypedElementListProxy* ElementList, TArray<struct FScriptTypedElementHandle>* ElementHandles);
	void Add(struct FScriptTypedElementListProxy* ElementList, struct FScriptTypedElementHandle* ElementHandle, bool ReturnValue);
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
	uint8                                        Pad_11FA[0x950];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTypedElementRegistry* GetDefaultObj();

	void GetInstance(class UTypedElementRegistry* ReturnValue);
	class UClass* GetElementInterface(class UObject* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA
class ITestTypedElementInterfaceA : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITestTypedElementInterfaceA* GetDefaultObj();

	struct FScriptTypedElementHandle SetDisplayName(class FText InNewName, bool* bNotify, bool ReturnValue);
	struct FScriptTypedElementHandle GetDisplayName(class FText ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceB
class ITestTypedElementInterfaceB : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITestTypedElementInterfaceB* GetDefaultObj();

	struct FScriptTypedElementHandle MarkAsTested(bool ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceC
class ITestTypedElementInterfaceC : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITestTypedElementInterfaceC* GetDefaultObj();

	struct FScriptTypedElementHandle GetIsTested(bool ReturnValue);
};

// 0x8 (0x30 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
class UTestTypedElementInterfaceA_ImplTyped : public UObject
{
public:
	uint8                                        Pad_121B[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTestTypedElementInterfaceA_ImplTyped* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
class UTestTypedElementInterfaceA_ImplUntyped : public UObject
{
public:
	uint8                                        Pad_121C[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTestTypedElementInterfaceA_ImplUntyped* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
class UTestTypedElementInterfaceBAndC_Typed : public UObject
{
public:
	uint8                                        Pad_121E[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTestTypedElementInterfaceBAndC_Typed* GetDefaultObj();

};

}


