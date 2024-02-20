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

// 0x40 (0x40 - 0x0)
// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath
struct UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Params
{
public:
	class FString                                InDesiredPackagePath;                              // 0x0(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	class UGroomAsset*                           InGroomAsset;                                      // 0x10(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class USkeletalMesh*                         InSkeletalMesh;                                    // 0x18(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        InNumInterpolationPoints;                          // 0x20(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_EAB[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class USkeletalMesh*                         InSourceSkeletalMeshForTransfer;                   // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	int32                                        InMatchingSection;                                 // 0x30(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_EAC[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGroomBindingAsset*                    ReturnValue;                                       // 0x38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
struct UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Params
{
public:
	class UGroomAsset*                           InGroomAsset;                                      // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class USkeletalMesh*                         InSkeletalMesh;                                    // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        InNumInterpolationPoints;                          // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_EBE[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class USkeletalMesh*                         InSourceSkeletalMeshForTransfer;                   // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	int32                                        InMatchingSection;                                 // 0x20(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_EC0[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGroomBindingAsset*                    ReturnValue;                                       // 0x28(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath
struct UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Params
{
public:
	class FString                                DesiredPackagePath;                                // 0x0(0x10)(Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UGroomAsset*                           GroomAsset;                                        // 0x10(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class UGeometryCache*                        GeometryCache;                                     // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	int32                                        NumInterpolationPoints;                            // 0x20(0x4)(ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_EEB[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryCache*                        SourceGeometryCacheForTransfer;                    // 0x28(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	int32                                        MatchingSection;                                   // 0x30(0x4)(Edit, BlueprintReadOnly, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_EEE[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGroomBindingAsset*                    ReturnValue;                                       // 0x38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset
struct UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Params
{
public:
	class UGroomAsset*                           GroomAsset;                                        // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class UGeometryCache*                        GeometryCache;                                     // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	int32                                        NumInterpolationPoints;                            // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_EFE[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryCache*                        SourceGeometryCacheForTransfer;                    // 0x18(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	int32                                        MatchingSection;                                   // 0x20(0x4)(Edit, BlueprintReadOnly, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_F01[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGroomBindingAsset*                    ReturnValue;                                       // 0x28(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HairStrandsCore.GroomComponent.SetPhysicsAsset
struct UGroomComponent_SetPhysicsAsset_Params
{
public:
	class UPhysicsAsset*                         InPhysicsAsset;                                    // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HairStrandsCore.GroomComponent.SetMeshDeformer
struct UGroomComponent_SetMeshDeformer_Params
{
public:
	class UMeshDeformer*                         InMeshDeformer;                                    // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HairStrandsCore.GroomComponent.SetHairLengthScaleEnable
struct UGroomComponent_SetHairLengthScaleEnable_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HairStrandsCore.GroomComponent.SetHairLengthScale
struct UGroomComponent_SetHairLengthScale_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
};

// 0x8 (0x8 - 0x0)
// Function HairStrandsCore.GroomComponent.SetGroomAsset
struct UGroomComponent_SetGroomAsset_Params
{
public:
	class UGroomAsset*                           Asset;                                             // 0x0(0x8)(BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HairStrandsCore.GroomComponent.SetEnableSimulation
struct UGroomComponent_SetEnableSimulation_Params
{
public:
	bool                                         bInEnableSimulation;                               // 0x0(0x1)(ConstParm, Net, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HairStrandsCore.GroomComponent.SetBindingAsset
struct UGroomComponent_SetBindingAsset_Params
{
public:
	class UGroomBindingAsset*                    InBinding;                                         // 0x0(0x8)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HairStrandsCore.GroomComponent.GetNiagaraComponent
struct UGroomComponent_GetNiagaraComponent_Params
{
public:
	int32                                        GroupIndex;                                        // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F36[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UNiagaraComponent*                     ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HairStrandsCore.GroomComponent.GetIsHairLengthScaleEnabled
struct UGroomComponent_GetIsHairLengthScaleEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HairStrandsCore.GroomComponent.AddCollisionComponent
struct UGroomComponent_AddCollisionComponent_Params
{
public:
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
};

}
}


