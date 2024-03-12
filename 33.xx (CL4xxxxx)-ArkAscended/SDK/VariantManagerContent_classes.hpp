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
	class UClass*                                DirectorClass;                                     // 0x28(0x8)(Edit, ExportObject, Net, EditFixedSize, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UVariantSet*>                   VariantSets;                                       // 0x30(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1919[0x50];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULevelVariantSets* GetDefaultObj();

	class UVariantSet* GetVariantSetByName();
	class UVariantSet* GetVariantSet();
	int32 GetNumVariantSets();
};

// 0x70 (0x530 - 0x4C0)
// Class VariantManagerContent.LevelVariantSetsActor
class ALevelVariantSetsActor : public AActor
{
public:
	struct FSoftObjectPath                       LevelVariantSets;                                  // 0x4C0(0x20)(BlueprintReadOnly, Net, OutParm, ReturnParm, GlobalConfig)
	TMap<class UClass*, class ULevelVariantSetsFunctionDirector*> DirectorInstances;                                 // 0x4E0(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class ALevelVariantSetsActor* GetDefaultObj();

	bool SwitchOnVariantByName(const class FString& VariantName);
	bool SwitchOnVariantByIndex();
	class ULevelVariantSets* SetLevelVariantSets();
	class ULevelVariantSets* GetLevelVariantSets();
};

// 0x18 (0x40 - 0x28)
// Class VariantManagerContent.LevelVariantSetsFunctionDirector
class ULevelVariantSetsFunctionDirector : public UObject
{
public:
	uint8                                        Pad_1957[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULevelVariantSetsFunctionDirector* GetDefaultObj();

};

// 0x198 (0x1C0 - 0x28)
// Class VariantManagerContent.PropertyValue
class UPropertyValue : public UObject
{
public:
	uint8                                        Pad_195C[0x60];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<FFieldPathProperty_>                  Properties;                                        // 0x88(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                PropertyIndices;                                   // 0x98(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FCapturedPropSegment>          CapturedPropSegments;                              // 0xA8(0x10)(Edit, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                FullDisplayString;                                 // 0xB8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  PropertySetterName;                                // 0xC8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class FString, class FString>           PropertySetterParameterDefaults;                   // 0xD0(0x50)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasRecordedData;                                  // 0x120(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_195F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                LeafPropertyClass;                                 // 0x128(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1960[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                ValueBytes;                                        // 0x138(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EPropertyValueCategory            PropCategory;                                      // 0x148(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1962[0x77];                                    // Fixing Size Of Struct > TateDumper <

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

// 0x28 (0x4E8 - 0x4C0)
// Class VariantManagerContent.SwitchActor
class ASwitchActor : public AActor
{
public:
	uint8                                        Pad_1970[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       SceneComponent;                                    // 0x4D8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	int32                                        LastSelectedOption;                                // 0x4E0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1972[0x4];                                     // Fixing Size Of Struct > TateDumper <

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
	TArray<struct FVariantDependency>            Dependencies;                                      // 0x28(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class FText                                  DisplayText;                                       // 0x38(0x18)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_19B2[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UVariantObjectBinding*>         ObjectBindings;                                    // 0x68(0x10)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTexture2D*                            Thumbnail;                                         // 0x78(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UVariant* GetDefaultObj();

	void SwitchOn();
	class UTexture2D* SetThumbnailFromTexture();
	class FString SetThumbnailFromFile();
	void SetThumbnailFromEditorViewport();
	float SetThumbnailFromCamera(class UObject** WorldContextObject, float MinZ);
	class FText SetDisplayText();
	struct FVariantDependency SetDependency();
	bool IsActive();
	class UTexture2D* GetThumbnail();
	class UVariantSet* GetParent();
	int32 GetNumDependencies();
	int32 GetNumActors();
	class FText GetDisplayText();
	TArray<class UVariant*> GetDependents();
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
	class FString                                CachedActorLabel;                                  // 0x28(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ObjectPtr;                                         // 0x38(0x20)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TLazyObjectPtr<class UObject>                LazyObjectPtr;                                     // 0x58(0x1C)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_19B8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UPropertyValue*>                CapturedProperties;                                // 0x78(0x10)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FFunctionCaller>               FunctionCallers;                                   // 0x88(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UVariantObjectBinding* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class VariantManagerContent.VariantSet
class UVariantSet : public UObject
{
public:
	class FText                                  DisplayText;                                       // 0x28(0x18)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_19C9[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bExpanded;                                         // 0x58(0x1)(Edit, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_19CA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UVariant*>                      Variants;                                          // 0x60(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            Thumbnail;                                         // 0x70(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UVariantSet* GetDefaultObj();

	class UTexture2D* SetThumbnailFromTexture();
	class FString SetThumbnailFromFile();
	void SetThumbnailFromEditorViewport();
	float SetThumbnailFromCamera(class UObject** WorldContextObject, float MinZ);
	class FText SetDisplayText();
	class UVariant* GetVariantByName(const class FString& VariantName);
	class UVariant* GetVariant();
	class UTexture2D* GetThumbnail();
	class ULevelVariantSets* GetParent();
	int32 GetNumVariants();
	class FText GetDisplayText();
};

}


