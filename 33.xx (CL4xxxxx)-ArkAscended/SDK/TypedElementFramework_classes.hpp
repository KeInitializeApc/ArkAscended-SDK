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
	bool NotEqual(struct FScriptTypedElementHandle* LHS, struct FScriptTypedElementHandle* RHS);
	bool IsSet(struct FScriptTypedElementHandle* ElementHandle);
	bool Equal(struct FScriptTypedElementHandle* LHS, struct FScriptTypedElementHandle* RHS);
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
	bool Remove(struct FScriptTypedElementListProxy* ElementList, struct FScriptTypedElementHandle* ElementHandle);
	int32 Num(struct FScriptTypedElementListProxy* ElementList);
	bool IsValidIndex(struct FScriptTypedElementListProxy* ElementList);
	bool HasElementsOfType(struct FScriptTypedElementListProxy* ElementList, class FName* ElementTypeName);
	bool HasElements(struct FScriptTypedElementListProxy* ElementList, class UClass** BaseInterfaceType);
	class UObject* GetElementInterface(struct FScriptTypedElementListProxy* ElementList, struct FScriptTypedElementHandle* ElementHandle, class UClass** BaseInterfaceType);
	TArray<struct FScriptTypedElementHandle> GetElementHandles(struct FScriptTypedElementListProxy* ElementList, class UClass** BaseInterfaceType);
	struct FScriptTypedElementHandle GetElementHandleAt(struct FScriptTypedElementListProxy* ElementList);
	void Empty(struct FScriptTypedElementListProxy* ElementList, int32* Slack);
	struct FScriptTypedElementListProxy CreateScriptElementList(class UTypedElementRegistry** Registry);
	int32 CountElementsOfType(struct FScriptTypedElementListProxy* ElementList, class FName* ElementTypeName);
	int32 CountElements(struct FScriptTypedElementListProxy* ElementList, class UClass** BaseInterfaceType);
	bool Contains(struct FScriptTypedElementListProxy* ElementList, struct FScriptTypedElementHandle* ElementHandle);
	struct FScriptTypedElementListProxy Clone(struct FScriptTypedElementListProxy* ElementList);
	void AppendList(struct FScriptTypedElementListProxy* ElementList, struct FScriptTypedElementListProxy* OtherElementList);
	void Append(struct FScriptTypedElementListProxy* ElementList, TArray<struct FScriptTypedElementHandle>* ElementHandles);
	bool Add(struct FScriptTypedElementListProxy* ElementList, struct FScriptTypedElementHandle* ElementHandle);
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
	uint8                                        Pad_2B40[0x950];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTypedElementRegistry* GetDefaultObj();

	class UTypedElementRegistry* GetInstance();
	class UObject* GetElementInterface(const struct FScriptTypedElementHandle& InElementHandle, class UClass** InBaseInterfaceType);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA
class ITestTypedElementInterfaceA : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITestTypedElementInterfaceA* GetDefaultObj();

	bool SetDisplayName(const struct FScriptTypedElementHandle& InElementHandle, class FText* InNewName, bool* bNotify);
	class FText GetDisplayName(const struct FScriptTypedElementHandle& InElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceB
class ITestTypedElementInterfaceB : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITestTypedElementInterfaceB* GetDefaultObj();

	bool MarkAsTested(const struct FScriptTypedElementHandle& InElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceC
class ITestTypedElementInterfaceC : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITestTypedElementInterfaceC* GetDefaultObj();

	bool GetIsTested(const struct FScriptTypedElementHandle& InElementHandle);
};

// 0x8 (0x30 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
class UTestTypedElementInterfaceA_ImplTyped : public UObject
{
public:
	uint8                                        Pad_2B55[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTestTypedElementInterfaceA_ImplTyped* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
class UTestTypedElementInterfaceA_ImplUntyped : public UObject
{
public:
	uint8                                        Pad_2B56[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTestTypedElementInterfaceA_ImplUntyped* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
class UTestTypedElementInterfaceBAndC_Typed : public UObject
{
public:
	uint8                                        Pad_2B5A[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTestTypedElementInterfaceBAndC_Typed* GetDefaultObj();

};

}


