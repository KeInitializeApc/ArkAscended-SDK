#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x90 - 0x28)
// Class VariantManagerContent.LevelVariantSets
class ULevelVariantSets : public UObject
{
public:
	class UClass*                                DirectorClass;                                     // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TArray<class UVariantSet*>                   VariantSets;                                       // 0x30(0x10)(Edit, Net, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B7[0x50];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULevelVariantSets* GetDefaultObj();

	void GetVariantSetByName(class FString* VariantSetName, class UVariantSet** ReturnValue);
	void GetVariantSet(int32* VariantSetIndex, class UVariantSet** ReturnValue);
	void GetNumVariantSets(int32* ReturnValue);
};

// 0x70 (0x538 - 0x4C8)
// Class VariantManagerContent.LevelVariantSetsActor
class ALevelVariantSetsActor : public AActor
{
public:
	struct FSoftObjectPath                       LevelVariantSets;                                  // 0x4C8(0x20)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	TMap<class UClass*, class ULevelVariantSetsFunctionDirector*> DirectorInstances;                                 // 0x4E8(0x50)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ALevelVariantSetsActor* GetDefaultObj();

	void SwitchOnVariantByName(class FString* VariantSetName, const class FString& VariantName, bool* ReturnValue);
	void SwitchOnVariantByIndex(int32* VariantSetIndex, int32* VariantIndex, bool* ReturnValue);
	void SetLevelVariantSets(class ULevelVariantSets** InVariantSets);
	void GetLevelVariantSets(bool* bLoad, class ULevelVariantSets** ReturnValue);
};

// 0x18 (0x40 - 0x28)
// Class VariantManagerContent.LevelVariantSetsFunctionDirector
class ULevelVariantSetsFunctionDirector : public UObject
{
public:
	uint8                                        Pad_61F[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULevelVariantSetsFunctionDirector* GetDefaultObj();

};

// 0x198 (0x1C0 - 0x28)
// Class VariantManagerContent.PropertyValue
class UPropertyValue : public UObject
{
public:
	uint8                                        Pad_631[0x60];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<FFieldPathProperty_>                  Properties;                                        // 0x88(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                PropertyIndices;                                   // 0x98(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FCapturedPropSegment>          CapturedPropSegments;                              // 0xA8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class FString                                FullDisplayString;                                 // 0xB8(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class FName                                  PropertySetterName;                                // 0xC8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TMap<class FString, class FString>           PropertySetterParameterDefaults;                   // 0xD0(0x50)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasRecordedData;                                  // 0x120(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_638[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UClass*                                LeafPropertyClass;                                 // 0x128(0x8)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_63A[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                ValueBytes;                                        // 0x138(0x10)(ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EPropertyValueCategory            PropCategory;                                      // 0x148(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_63B[0x77];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPropertyValue* GetDefaultObj();

	void HasRecordedData(bool* ReturnValue);
	void GetPropertyTooltip(class FText* ReturnValue);
	void GetFullDisplayString(class FString* ReturnValue);
};

// 0x0 (0x1C0 - 0x1C0)
// Class VariantManagerContent.PropertyValueTransform
class UPropertyValueTransform : public UPropertyValue
{
public:

	static class UClass* StaticClass();
	static class UPropertyValueTransform* GetDefaultObj();

};

// 0x0 (0x1C0 - 0x1C0)
// Class VariantManagerContent.PropertyValueVisibility
class UPropertyValueVisibility : public UPropertyValue
{
public:

	static class UClass* StaticClass();
	static class UPropertyValueVisibility* GetDefaultObj();

};

// 0x0 (0x1C0 - 0x1C0)
// Class VariantManagerContent.PropertyValueColor
class UPropertyValueColor : public UPropertyValue
{
public:

	static class UClass* StaticClass();
	static class UPropertyValueColor* GetDefaultObj();

};

// 0x0 (0x1C0 - 0x1C0)
// Class VariantManagerContent.PropertyValueMaterial
class UPropertyValueMaterial : public UPropertyValue
{
public:

	static class UClass* StaticClass();
	static class UPropertyValueMaterial* GetDefaultObj();

};

// 0x0 (0x1C0 - 0x1C0)
// Class VariantManagerContent.PropertyValueOption
class UPropertyValueOption : public UPropertyValue
{
public:

	static class UClass* StaticClass();
	static class UPropertyValueOption* GetDefaultObj();

};

// 0x0 (0x1C0 - 0x1C0)
// Class VariantManagerContent.PropertyValueSoftObject
class UPropertyValueSoftObject : public UPropertyValue
{
public:

	static class UClass* StaticClass();
	static class UPropertyValueSoftObject* GetDefaultObj();

};

// 0x28 (0x4F0 - 0x4C8)
// Class VariantManagerContent.SwitchActor
class ASwitchActor : public AActor
{
public:
	uint8                                        Pad_65E[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       SceneComponent;                                    // 0x4E0(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	int32                                        LastSelectedOption;                                // 0x4E8(0x4)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_660[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ASwitchActor* GetDefaultObj();

	int32 SelectOption();
	void GetSelectedOption(int32* ReturnValue);
	void GetOptions(TArray<class AActor*>* ReturnValue);
};

// 0x58 (0x80 - 0x28)
// Class VariantManagerContent.Variant
class UVariant : public UObject
{
public:
	TArray<struct FVariantDependency>            Dependencies;                                      // 0x28(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	class FText                                  DisplayText;                                       // 0x38(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_696[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UVariantObjectBinding*>         ObjectBindings;                                    // 0x68(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            Thumbnail;                                         // 0x78(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UVariant* GetDefaultObj();

	void SwitchOn();
	void SetThumbnailFromTexture(class UTexture2D** NewThumbnail);
	void SetThumbnailFromFile(const class FString& FilePath);
	void SetThumbnailFromEditorViewport();
	float SetThumbnailFromCamera(struct FTransform* CameraTransform, float* FOVDegrees, float* MinZ);
	void SetDisplayText(class FText* NewDisplayText);
	int32 SetDependency(struct FVariantDependency* Dependency);
	void IsActive(bool* ReturnValue);
	void GetThumbnail(class UTexture2D** ReturnValue);
	void GetParent(class UVariantSet** ReturnValue);
	void GetNumDependencies(int32* ReturnValue);
	void GetNumActors(int32* ReturnValue);
	void GetDisplayText(class FText* ReturnValue);
	void GetDependents(class ULevelVariantSets** LevelVariantSets, bool* bOnlyEnabledDependencies, TArray<class UVariant*>* ReturnValue);
	int32 GetDependency(struct FVariantDependency* ReturnValue);
	void GetActor(int32 ActorIndex, class AActor** ReturnValue);
	int32 DeleteDependency();
	void AddDependency(struct FVariantDependency* Dependency, int32* ReturnValue);
};

// 0x70 (0x98 - 0x28)
// Class VariantManagerContent.VariantObjectBinding
class UVariantObjectBinding : public UObject
{
public:
	class FString                                CachedActorLabel;                                  // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ObjectPtr;                                         // 0x38(0x20)(Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TLazyObjectPtr<class UObject>                LazyObjectPtr;                                     // 0x58(0x1C)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_6A0[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UPropertyValue*>                CapturedProperties;                                // 0x78(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FFunctionCaller>               FunctionCallers;                                   // 0x88(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UVariantObjectBinding* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class VariantManagerContent.VariantSet
class UVariantSet : public UObject
{
public:
	class FText                                  DisplayText;                                       // 0x28(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_6EF[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bExpanded;                                         // 0x58(0x1)(EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_6F0[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UVariant*>                      Variants;                                          // 0x60(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, Config, InstancedReference, SubobjectReference)
	class UTexture2D*                            Thumbnail;                                         // 0x70(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UVariantSet* GetDefaultObj();

	void SetThumbnailFromTexture(class UTexture2D** NewThumbnail);
	void SetThumbnailFromFile(const class FString& FilePath);
	void SetThumbnailFromEditorViewport();
	float SetThumbnailFromCamera(struct FTransform* CameraTransform, float* FOVDegrees, float* MinZ);
	void SetDisplayText(class FText* NewDisplayText);
	void GetVariantByName(const class FString& VariantName, class UVariant** ReturnValue);
	void GetVariant(int32* VariantIndex, class UVariant** ReturnValue);
	void GetThumbnail(class UTexture2D** ReturnValue);
	void GetParent(class ULevelVariantSets** ReturnValue);
	void GetNumVariants(int32* ReturnValue);
	void GetDisplayText(class FText* ReturnValue);
};

}


