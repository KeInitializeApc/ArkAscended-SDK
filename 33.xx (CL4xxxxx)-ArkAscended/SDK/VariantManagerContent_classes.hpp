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
	class UClass*                                DirectorClass;                                     // 0x28(0x8)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UVariantSet*>                   VariantSets;                                       // 0x30(0x10)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_7C9[0x50];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULevelVariantSets* GetDefaultObj();

	class UVariantSet* GetVariantSetByName();
	class UVariantSet* GetVariantSet();
	int32 GetNumVariantSets();
};

// 0x70 (0x538 - 0x4C8)
// Class VariantManagerContent.LevelVariantSetsActor
class ALevelVariantSetsActor : public AActor
{
public:
	struct FSoftObjectPath                       LevelVariantSets;                                  // 0x4C8(0x20)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	TMap<class UClass*, class ULevelVariantSetsFunctionDirector*> DirectorInstances;                                 // 0x4E8(0x50)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ALevelVariantSetsActor* GetDefaultObj();

	bool SwitchOnVariantByName();
	bool SwitchOnVariantByIndex();
	class ULevelVariantSets* SetLevelVariantSets();
	class ULevelVariantSets* GetLevelVariantSets();
};

// 0x18 (0x40 - 0x28)
// Class VariantManagerContent.LevelVariantSetsFunctionDirector
class ULevelVariantSetsFunctionDirector : public UObject
{
public:
	uint8                                        Pad_7DB[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULevelVariantSetsFunctionDirector* GetDefaultObj();

};

// 0x198 (0x1C0 - 0x28)
// Class VariantManagerContent.PropertyValue
class UPropertyValue : public UObject
{
public:
	uint8                                        Pad_7E3[0x60];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<FFieldPathProperty_>                  Properties;                                        // 0x88(0x10)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                PropertyIndices;                                   // 0x98(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FCapturedPropSegment>          CapturedPropSegments;                              // 0xA8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class FString                                FullDisplayString;                                 // 0xB8(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class FName                                  PropertySetterName;                                // 0xC8(0x8)(Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TMap<class FString, class FString>           PropertySetterParameterDefaults;                   // 0xD0(0x50)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasRecordedData;                                  // 0x120(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_7E9[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UClass*                                LeafPropertyClass;                                 // 0x128(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_7EA[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                ValueBytes;                                        // 0x138(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EPropertyValueCategory            PropCategory;                                      // 0x148(0x1)(EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_7EB[0x77];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPropertyValue* GetDefaultObj();

	bool HasRecordedData();
	class FText GetPropertyTooltip();
	class FString GetFullDisplayString();
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
	uint8                                        Pad_7FB[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       SceneComponent;                                    // 0x4E0(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	int32                                        LastSelectedOption;                                // 0x4E8(0x4)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_7FD[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ASwitchActor* GetDefaultObj();

	void SelectOption(int32 OptionIndex);
	int32 GetSelectedOption();
	TArray<class AActor*> GetOptions();
};

// 0x58 (0x80 - 0x28)
// Class VariantManagerContent.Variant
class UVariant : public UObject
{
public:
	TArray<struct FVariantDependency>            Dependencies;                                      // 0x28(0x10)(Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class FText                                  DisplayText;                                       // 0x38(0x18)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_829[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UVariantObjectBinding*>         ObjectBindings;                                    // 0x68(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            Thumbnail;                                         // 0x78(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UVariant* GetDefaultObj();

	void SwitchOn();
	class UTexture2D* SetThumbnailFromTexture();
	class FString SetThumbnailFromFile();
	void SetThumbnailFromEditorViewport();
	float SetThumbnailFromCamera(float MinZ, float* Gamma);
	class FText SetDisplayText();
	struct FVariantDependency SetDependency();
	bool IsActive();
	class UTexture2D* GetThumbnail();
	class UVariantSet* GetParent();
	int32 GetNumDependencies();
	int32 GetNumActors();
	class FText GetDisplayText();
	TArray<class UVariant*> GetDependents(class ULevelVariantSets** LevelVariantSets);
	struct FVariantDependency GetDependency();
	class AActor* GetActor();
	int32 DeleteDependency();
	int32 AddDependency();
};

// 0x70 (0x98 - 0x28)
// Class VariantManagerContent.VariantObjectBinding
class UVariantObjectBinding : public UObject
{
public:
	class FString                                CachedActorLabel;                                  // 0x28(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ObjectPtr;                                         // 0x38(0x20)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TLazyObjectPtr<class UObject>                LazyObjectPtr;                                     // 0x58(0x1C)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_82C[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UPropertyValue*>                CapturedProperties;                                // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FFunctionCaller>               FunctionCallers;                                   // 0x88(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UVariantObjectBinding* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class VariantManagerContent.VariantSet
class UVariantSet : public UObject
{
public:
	class FText                                  DisplayText;                                       // 0x28(0x18)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_864[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bExpanded;                                         // 0x58(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_866[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UVariant*>                      Variants;                                          // 0x60(0x10)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UTexture2D*                            Thumbnail;                                         // 0x70(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UVariantSet* GetDefaultObj();

	class UTexture2D* SetThumbnailFromTexture();
	class FString SetThumbnailFromFile();
	void SetThumbnailFromEditorViewport();
	float SetThumbnailFromCamera(float MinZ, float* Gamma);
	class FText SetDisplayText();
	class UVariant* GetVariantByName();
	class UVariant* GetVariant();
	class UTexture2D* GetThumbnail();
	class ULevelVariantSets* GetParent();
	int32 GetNumVariants();
	class FText GetDisplayText();
};

}


