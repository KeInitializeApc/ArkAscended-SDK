#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
struct ULevelVariantSets_GetVariantSetByName_Params
{
public:
	class FString                                VariantSetName;                                    // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UVariantSet*                           ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function VariantManagerContent.LevelVariantSets.GetVariantSet
struct ULevelVariantSets_GetVariantSet_Params
{
public:
	int32                                        VariantSetIndex;                                   // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_7C6[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UVariantSet*                           ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
struct ULevelVariantSets_GetNumVariantSets_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
struct ALevelVariantSetsActor_SwitchOnVariantByName_Params
{
public:
	class FString                                VariantSetName;                                    // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class FString                                VariantName;                                       // 0x10(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_7CC[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
struct ALevelVariantSetsActor_SwitchOnVariantByIndex_Params
{
public:
	int32                                        VariantSetIndex;                                   // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        VariantIndex;                                      // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_7D1[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
struct ALevelVariantSetsActor_SetLevelVariantSets_Params
{
public:
	class ULevelVariantSets*                     InVariantSets;                                     // 0x0(0x8)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
struct ALevelVariantSetsActor_GetLevelVariantSets_Params
{
public:
	bool                                         bLoad;                                             // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_7D7[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class ULevelVariantSets*                     ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function VariantManagerContent.PropertyValue.HasRecordedData
struct UPropertyValue_HasRecordedData_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function VariantManagerContent.PropertyValue.GetPropertyTooltip
struct UPropertyValue_GetPropertyTooltip_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function VariantManagerContent.PropertyValue.GetFullDisplayString
struct UPropertyValue_GetFullDisplayString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function VariantManagerContent.SwitchActor.SelectOption
struct ASwitchActor_SelectOption_Params
{
public:
	int32                                        OptionIndex;                                       // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function VariantManagerContent.SwitchActor.GetSelectedOption
struct ASwitchActor_GetSelectedOption_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function VariantManagerContent.SwitchActor.GetOptions
struct ASwitchActor_GetOptions_Params
{
public:
	TArray<class AActor*>                        ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function VariantManagerContent.Variant.SetThumbnailFromTexture
struct UVariant_SetThumbnailFromTexture_Params
{
public:
	class UTexture2D*                            NewThumbnail;                                      // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function VariantManagerContent.Variant.SetThumbnailFromFile
struct UVariant_SetThumbnailFromFile_Params
{
public:
	class FString                                FilePath;                                          // 0x0(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function VariantManagerContent.Variant.SetThumbnailFromCamera
struct UVariant_SetThumbnailFromCamera_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_80A[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CameraTransform;                                   // 0x10(0x60)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        FOVDegrees;                                        // 0x70(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MinZ;                                              // 0x74(0x4)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Gamma;                                             // 0x78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_80B[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function VariantManagerContent.Variant.SetDisplayText
struct UVariant_SetDisplayText_Params
{
public:
	class FText                                  NewDisplayText;                                    // 0x0(0x18)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function VariantManagerContent.Variant.SetDependency
struct UVariant_SetDependency_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_80F[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVariantDependency                    Dependency;                                        // 0x8(0x68)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function VariantManagerContent.Variant.IsActive
struct UVariant_IsActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function VariantManagerContent.Variant.GetThumbnail
struct UVariant_GetThumbnail_Params
{
public:
	class UTexture2D*                            ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function VariantManagerContent.Variant.GetParent
struct UVariant_GetParent_Params
{
public:
	class UVariantSet*                           ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function VariantManagerContent.Variant.GetNumDependencies
struct UVariant_GetNumDependencies_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function VariantManagerContent.Variant.GetNumActors
struct UVariant_GetNumActors_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function VariantManagerContent.Variant.GetDisplayText
struct UVariant_GetDisplayText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function VariantManagerContent.Variant.GetDependents
struct UVariant_GetDependents_Params
{
public:
	class ULevelVariantSets*                     LevelVariantSets;                                  // 0x0(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	bool                                         bOnlyEnabledDependencies;                          // 0x8(0x1)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_823[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UVariant*>                      ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function VariantManagerContent.Variant.GetDependency
struct UVariant_GetDependency_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_825[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVariantDependency                    ReturnValue;                                       // 0x8(0x68)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function VariantManagerContent.Variant.GetActor
struct UVariant_GetActor_Params
{
public:
	int32                                        ActorIndex;                                        // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_826[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class AActor*                                ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function VariantManagerContent.Variant.DeleteDependency
struct UVariant_DeleteDependency_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
};

// 0x70 (0x70 - 0x0)
// Function VariantManagerContent.Variant.AddDependency
struct UVariant_AddDependency_Params
{
public:
	struct FVariantDependency                    Dependency;                                        // 0x0(0x68)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x68(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_828[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function VariantManagerContent.VariantSet.SetThumbnailFromTexture
struct UVariantSet_SetThumbnailFromTexture_Params
{
public:
	class UTexture2D*                            NewThumbnail;                                      // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function VariantManagerContent.VariantSet.SetThumbnailFromFile
struct UVariantSet_SetThumbnailFromFile_Params
{
public:
	class FString                                FilePath;                                          // 0x0(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function VariantManagerContent.VariantSet.SetThumbnailFromCamera
struct UVariantSet_SetThumbnailFromCamera_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_835[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CameraTransform;                                   // 0x10(0x60)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        FOVDegrees;                                        // 0x70(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MinZ;                                              // 0x74(0x4)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Gamma;                                             // 0x78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_837[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function VariantManagerContent.VariantSet.SetDisplayText
struct UVariantSet_SetDisplayText_Params
{
public:
	class FText                                  NewDisplayText;                                    // 0x0(0x18)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function VariantManagerContent.VariantSet.GetVariantByName
struct UVariantSet_GetVariantByName_Params
{
public:
	class FString                                VariantName;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UVariant*                              ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function VariantManagerContent.VariantSet.GetVariant
struct UVariantSet_GetVariant_Params
{
public:
	int32                                        VariantIndex;                                      // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_84E[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UVariant*                              ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function VariantManagerContent.VariantSet.GetThumbnail
struct UVariantSet_GetThumbnail_Params
{
public:
	class UTexture2D*                            ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function VariantManagerContent.VariantSet.GetParent
struct UVariantSet_GetParent_Params
{
public:
	class ULevelVariantSets*                     ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function VariantManagerContent.VariantSet.GetNumVariants
struct UVariantSet_GetNumVariants_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function VariantManagerContent.VariantSet.GetDisplayText
struct UVariantSet_GetDisplayText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


