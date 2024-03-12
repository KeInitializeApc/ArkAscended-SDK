#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementSelectionSetLibrary
class UTypedElementSelectionSetLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class UTypedElementSelectionSetLibrary* GetDefaultObj();

	bool SetSelectionFromList(class UTypedElementSelectionSet** SelectionSet, struct FScriptTypedElementListProxy* ElementList, const struct FTypedElementSelectionOptions& SelectionOptions);
	bool SelectElementsFromList(class UTypedElementSelectionSet** SelectionSet, struct FScriptTypedElementListProxy* ElementList, const struct FTypedElementSelectionOptions& SelectionOptions);
	struct FScriptTypedElementListProxy GetNormalizedSelection(class UTypedElementSelectionSet** SelectionSet, struct FTypedElementSelectionNormalizationOptions* NormalizationOptions);
	struct FScriptTypedElementListProxy GetNormalizedElementList(class UTypedElementSelectionSet** SelectionSet, struct FScriptTypedElementListProxy* ElementList, struct FTypedElementSelectionNormalizationOptions* NormalizationOptions);
	bool DeselectElementsFromList(class UTypedElementSelectionSet** SelectionSet, struct FScriptTypedElementListProxy* ElementList, const struct FTypedElementSelectionOptions& SelectionOptions);
};

// 0x870 (0x898 - 0x28)
// Class TypedElementRuntime.TypedElementSelectionSet
class UTypedElementSelectionSet : public UObject
{
public:
	uint8                                        Pad_6D2[0x800];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnPreSelectionChange;                              // 0x828(0x10)(Edit, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSelectionChange;                                 // 0x838(0x10)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_6D5[0x50];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTypedElementSelectionSet* GetDefaultObj();

	bool SetSelection(TArray<struct FScriptTypedElementHandle>* InElementHandles, struct FTypedElementSelectionOptions* InSelectionOptions);
	bool SelectElements(TArray<struct FScriptTypedElementHandle>* InElementHandles, struct FTypedElementSelectionOptions* InSelectionOptions);
	bool SelectElement(const struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions* InSelectionOptions);
	struct FTypedElementSelectionSetState RestoreSelectionState();
	void OnPreChangeDynamic__DelegateSignature(class UTypedElementSelectionSet** SelectionSet);
	void OnChangeDynamic__DelegateSignature(class UTypedElementSelectionSet** SelectionSet);
	TArray<struct FScriptTypedElementHandle> K2_GetSelectedElementHandles(class UClass** InBaseInterfaceType);
	bool IsElementSelected(const struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementIsSelectedOptions* InSelectionOptions);
	bool HasSelectedObjects(class UClass** InRequiredClass);
	bool HasSelectedElements(class UClass** InBaseInterfaceType);
	class UObject* GetTopSelectedObject(class UClass** InRequiredClass);
	struct FScriptTypedElementHandle GetSelectionElement(const struct FScriptTypedElementHandle& InElementHandle, enum class ETypedElementSelectionMethod* InSelectionMethod);
	TArray<class UObject*> GetSelectedObjects(class UClass** InRequiredClass);
	int32 GetNumSelectedElements();
	struct FTypedElementSelectionSetState GetCurrentSelectionState();
	class UObject* GetBottomSelectedObject(class UClass** InRequiredClass);
	bool DeselectElements(TArray<struct FScriptTypedElementHandle>* InElementHandles, struct FTypedElementSelectionOptions* InSelectionOptions);
	bool DeselectElement(const struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions* InSelectionOptions);
	int32 CountSelectedObjects(class UClass** InRequiredClass);
	int32 CountSelectedElements(class UClass** InBaseInterfaceType);
	bool ClearSelection(struct FTypedElementSelectionOptions* InSelectionOptions);
	bool CanSelectElement(const struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions* InSelectionOptions);
	bool CanDeselectElement(const struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions* InSelectionOptions);
	bool AllowSelectionModifiers(const struct FScriptTypedElementHandle& InElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementAssetDataInterface
class ITypedElementAssetDataInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementAssetDataInterface* GetDefaultObj();

	struct FAssetData GetAssetData(const struct FScriptTypedElementHandle& InElementHandle);
	TArray<struct FAssetData> GetAllReferencedAssetDatas(const struct FScriptTypedElementHandle& InElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementHierarchyInterface
class ITypedElementHierarchyInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementHierarchyInterface* GetDefaultObj();

	struct FScriptTypedElementHandle GetParentElement(const struct FScriptTypedElementHandle& InElementHandle, bool* bAllowCreate);
	void GetChildElements(const struct FScriptTypedElementHandle& InElementHandle, TArray<struct FScriptTypedElementHandle>* OutElementHandles, bool* bAllowCreate);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementObjectInterface
class ITypedElementObjectInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementObjectInterface* GetDefaultObj();

	class UClass* GetObjectClass(const struct FScriptTypedElementHandle& InElementHandle);
	class UObject* GetObject(const struct FScriptTypedElementHandle& InElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementSelectionInterface
class ITypedElementSelectionInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementSelectionInterface* GetDefaultObj();

	bool SelectElement(const struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy* InSelectionSet, struct FTypedElementSelectionOptions* InSelectionOptions);
	bool IsElementSelected(const struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy* InSelectionSet, struct FTypedElementIsSelectedOptions* InSelectionOptions);
	struct FScriptTypedElementHandle GetSelectionElement(const struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy* InCurrentSelection, enum class ETypedElementSelectionMethod* InSelectionMethod);
	bool DeselectElement(const struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy* InSelectionSet, struct FTypedElementSelectionOptions* InSelectionOptions);
	bool CanSelectElement(const struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions* InSelectionOptions);
	bool CanDeselectElement(const struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions* InSelectionOptions);
	bool AllowSelectionModifiers(const struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy* InSelectionSet);
};

}


