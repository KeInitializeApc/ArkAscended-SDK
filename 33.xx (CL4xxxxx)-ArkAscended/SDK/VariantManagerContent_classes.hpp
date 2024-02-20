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
	class UClass*                                DirectorClass;                                     // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	TArray<class UVariantSet*>                   VariantSets;                                       // 0x30(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_14D2[0x50];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULevelVariantSets* GetDefaultObj();

	class FString GetVariantSetByName(class UVariantSet* ReturnValue);
	int32 GetVariantSet(class UVariantSet* ReturnValue);
	void GetNumVariantSets(int32 ReturnValue);
};

// 0x70 (0x538 - 0x4C8)
// Class VariantManagerContent.LevelVariantSetsActor
class ALevelVariantSetsActor : public AActor
{
public:
	struct FSoftObjectPath                       LevelVariantSets;                                  // 0x4C8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	TMap<class UClass*, class ULevelVariantSetsFunctionDirector*> DirectorInstances;                                 // 0x4E8(0x50)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class ALevelVariantSetsActor* GetDefaultObj();

	class FString SwitchOnVariantByName(const class FString& VariantName, bool ReturnValue);
	int32 SwitchOnVariantByIndex(bool ReturnValue);
	class ULevelVariantSets* SetLevelVariantSets();
	bool GetLevelVariantSets(class ULevelVariantSets* ReturnValue);
};

// 0x18 (0x40 - 0x28)
// Class VariantManagerContent.LevelVariantSetsFunctionDirector
class ULevelVariantSetsFunctionDirector : public UObject
{
public:
	uint8                                        Pad_1500[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULevelVariantSetsFunctionDirector* GetDefaultObj();

};

// 0x198 (0x1C0 - 0x28)
// Class VariantManagerContent.PropertyValue
class UPropertyValue : public UObject
{
public:
	uint8                                        Pad_1508[0x60];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<FFieldPathProperty_>                  Properties;                                        // 0x88(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                PropertyIndices;                                   // 0x98(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	TArray<struct FCapturedPropSegment>          CapturedPropSegments;                              // 0xA8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class FString                                FullDisplayString;                                 // 0xB8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class FName                                  PropertySetterName;                                // 0xC8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	TMap<class FString, class FString>           PropertySetterParameterDefaults;                   // 0xD0(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasRecordedData;                                  // 0x120(0x1)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_150F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                LeafPropertyClass;                                 // 0x128(0x8)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1514[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                ValueBytes;                                        // 0x138(0x10)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class EPropertyValueCategory            PropCategory;                                      // 0x148(0x1)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1519[0x77];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPropertyValue* GetDefaultObj();

	void HasRecordedData(bool ReturnValue);
	void GetPropertyTooltip(class FText ReturnValue);
	void GetFullDisplayString(const class FString& ReturnValue);
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
	uint8                                        Pad_1538[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       SceneComponent;                                    // 0x4E0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	int32                                        LastSelectedOption;                                // 0x4E8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_153B[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ASwitchActor* GetDefaultObj();

	void SelectOption(int32* OptionIndex);
	void GetSelectedOption(int32 ReturnValue);
	void GetOptions(const TArray<class AActor*>& ReturnValue);
};

// 0x58 (0x80 - 0x28)
// Class VariantManagerContent.Variant
class UVariant : public UObject
{
public:
	TArray<struct FVariantDependency>            Dependencies;                                      // 0x28(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class FText                                  DisplayText;                                       // 0x38(0x18)(Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15A0[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UVariantObjectBinding*>         ObjectBindings;                                    // 0x68(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UTexture2D*                            Thumbnail;                                         // 0x78(0x8)(BlueprintVisible, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UVariant* GetDefaultObj();

	void SwitchOn();
	class UTexture2D* SetThumbnailFromTexture();
	class FString SetThumbnailFromFile();
	void SetThumbnailFromEditorViewport();
	float SetThumbnailFromCamera();
	class FText SetDisplayText();
	struct FVariantDependency SetDependency(int32* Index);
	void IsActive(bool ReturnValue);
	void GetThumbnail(class UTexture2D* ReturnValue);
	void GetParent(class UVariantSet* ReturnValue);
	void GetNumDependencies(int32 ReturnValue);
	void GetNumActors(int32 ReturnValue);
	void GetDisplayText(class FText ReturnValue);
	bool GetDependents(class ULevelVariantSets** LevelVariantSets, const TArray<class UVariant*>& ReturnValue);
	void GetDependency(int32* Index, const struct FVariantDependency& ReturnValue);
	int32 GetActor(class AActor* ReturnValue);
	void DeleteDependency(int32* Index);
	struct FVariantDependency AddDependency(int32 ReturnValue);
};

// 0x70 (0x98 - 0x28)
// Class VariantManagerContent.VariantObjectBinding
class UVariantObjectBinding : public UObject
{
public:
	class FString                                CachedActorLabel;                                  // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ObjectPtr;                                         // 0x38(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	TLazyObjectPtr<class UObject>                LazyObjectPtr;                                     // 0x58(0x1C)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_15AB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UPropertyValue*>                CapturedProperties;                                // 0x78(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	TArray<struct FFunctionCaller>               FunctionCallers;                                   // 0x88(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UVariantObjectBinding* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class VariantManagerContent.VariantSet
class UVariantSet : public UObject
{
public:
	class FText                                  DisplayText;                                       // 0x28(0x18)(Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15F9[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bExpanded;                                         // 0x58(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15FA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UVariant*>                      Variants;                                          // 0x60(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            Thumbnail;                                         // 0x70(0x8)(BlueprintVisible, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UVariantSet* GetDefaultObj();

	class UTexture2D* SetThumbnailFromTexture();
	class FString SetThumbnailFromFile();
	void SetThumbnailFromEditorViewport();
	float SetThumbnailFromCamera();
	class FText SetDisplayText();
	void GetVariantByName(const class FString& VariantName, class UVariant* ReturnValue);
	int32 GetVariant(class UVariant* ReturnValue);
	void GetThumbnail(class UTexture2D* ReturnValue);
	void GetParent(class ULevelVariantSets* ReturnValue);
	void GetNumVariants(int32 ReturnValue);
	void GetDisplayText(class FText ReturnValue);
};

}


