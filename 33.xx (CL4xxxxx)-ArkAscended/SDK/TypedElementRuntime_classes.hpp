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

	struct FTypedElementSelectionOptions SetSelectionFromList(class UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy* ElementList, bool ReturnValue);
	struct FTypedElementSelectionOptions SelectElementsFromList(class UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy* ElementList, bool ReturnValue);
	struct FTypedElementSelectionNormalizationOptions GetNormalizedSelection(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ReturnValue);
	struct FTypedElementSelectionNormalizationOptions GetNormalizedElementList(class UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy* ElementList, const struct FScriptTypedElementListProxy& ReturnValue);
	struct FTypedElementSelectionOptions DeselectElementsFromList(class UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy* ElementList, bool ReturnValue);
};

// 0x870 (0x898 - 0x28)
// Class TypedElementRuntime.TypedElementSelectionSet
class UTypedElementSelectionSet : public UObject
{
public:
	uint8                                        Pad_20EB[0x800];                                   // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnPreSelectionChange;                              // 0x828(0x10)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSelectionChange;                                 // 0x838(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_20ED[0x50];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTypedElementSelectionSet* GetDefaultObj();

	struct FTypedElementSelectionOptions SetSelection(bool ReturnValue);
	struct FTypedElementSelectionOptions SelectElements(bool ReturnValue);
	struct FTypedElementSelectionOptions SelectElement(bool ReturnValue);
	struct FTypedElementSelectionSetState RestoreSelectionState();
	void OnPreChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet);
	void OnChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet);
	class UClass* K2_GetSelectedElementHandles(const TArray<struct FScriptTypedElementHandle>& ReturnValue);
	struct FTypedElementIsSelectedOptions IsElementSelected(bool ReturnValue);
	class UClass* HasSelectedObjects(bool ReturnValue);
	class UClass* HasSelectedElements(bool ReturnValue);
	class UClass* GetTopSelectedObject(class UObject* ReturnValue);
	enum class ETypedElementSelectionMethod GetSelectionElement(const struct FScriptTypedElementHandle& ReturnValue);
	class UClass* GetSelectedObjects(const TArray<class UObject*>& ReturnValue);
	void GetNumSelectedElements(int32 ReturnValue);
	void GetCurrentSelectionState(const struct FTypedElementSelectionSetState& ReturnValue);
	class UClass* GetBottomSelectedObject(class UObject* ReturnValue);
	struct FTypedElementSelectionOptions DeselectElements(bool ReturnValue);
	struct FTypedElementSelectionOptions DeselectElement(bool ReturnValue);
	class UClass* CountSelectedObjects(int32 ReturnValue);
	class UClass* CountSelectedElements(int32 ReturnValue);
	struct FTypedElementSelectionOptions ClearSelection(bool ReturnValue);
	struct FTypedElementSelectionOptions CanSelectElement(bool ReturnValue);
	struct FTypedElementSelectionOptions CanDeselectElement(bool ReturnValue);
	struct FScriptTypedElementHandle AllowSelectionModifiers(bool ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementAssetDataInterface
class ITypedElementAssetDataInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementAssetDataInterface* GetDefaultObj();

	struct FScriptTypedElementHandle GetAssetData(const struct FAssetData& ReturnValue);
	struct FScriptTypedElementHandle GetAllReferencedAssetDatas(const TArray<struct FAssetData>& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementHierarchyInterface
class ITypedElementHierarchyInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementHierarchyInterface* GetDefaultObj();

	bool GetParentElement(const struct FScriptTypedElementHandle& ReturnValue);
	bool GetChildElements();
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementObjectInterface
class ITypedElementObjectInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementObjectInterface* GetDefaultObj();

	struct FScriptTypedElementHandle GetObjectClass(class UClass* ReturnValue);
	struct FScriptTypedElementHandle GetObject(class UObject* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementSelectionInterface
class ITypedElementSelectionInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementSelectionInterface* GetDefaultObj();

	struct FTypedElementSelectionOptions SelectElement(bool ReturnValue);
	struct FTypedElementIsSelectedOptions IsElementSelected(bool ReturnValue);
	enum class ETypedElementSelectionMethod GetSelectionElement(const struct FScriptTypedElementHandle& ReturnValue);
	struct FTypedElementSelectionOptions DeselectElement(bool ReturnValue);
	struct FTypedElementSelectionOptions CanSelectElement(bool ReturnValue);
	struct FTypedElementSelectionOptions CanDeselectElement(bool ReturnValue);
	struct FScriptTypedElementListProxy AllowSelectionModifiers(bool ReturnValue);
};

}


