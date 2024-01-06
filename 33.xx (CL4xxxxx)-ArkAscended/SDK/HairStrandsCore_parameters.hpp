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
	class FString                                InDesiredPackagePath;                              // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UGroomAsset*                           InGroomAsset;                                      // 0x10(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class USkeletalMesh*                         InSkeletalMesh;                                    // 0x18(0x8)(Net, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	int32                                        InNumInterpolationPoints;                          // 0x20(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_BA0[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class USkeletalMesh*                         InSourceSkeletalMeshForTransfer;                   // 0x28(0x8)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	int32                                        InMatchingSection;                                 // 0x30(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_BA2[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGroomBindingAsset*                    ReturnValue;                                       // 0x38(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
struct UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Params
{
public:
	class UGroomAsset*                           InGroomAsset;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class USkeletalMesh*                         InSkeletalMesh;                                    // 0x8(0x8)(Net, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	int32                                        InNumInterpolationPoints;                          // 0x10(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_BA8[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class USkeletalMesh*                         InSourceSkeletalMeshForTransfer;                   // 0x18(0x8)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	int32                                        InMatchingSection;                                 // 0x20(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_BAA[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGroomBindingAsset*                    ReturnValue;                                       // 0x28(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath
struct UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Params
{
public:
	class FString                                DesiredPackagePath;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UGroomAsset*                           GroomAsset;                                        // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst)
	class UGeometryCache*                        GeometryCache;                                     // 0x18(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	int32                                        NumInterpolationPoints;                            // 0x20(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_BB7[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryCache*                        SourceGeometryCacheForTransfer;                    // 0x28(0x8)(BlueprintVisible, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	int32                                        MatchingSection;                                   // 0x30(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_BB9[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGroomBindingAsset*                    ReturnValue;                                       // 0x38(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset
struct UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Params
{
public:
	class UGroomAsset*                           GroomAsset;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst)
	class UGeometryCache*                        GeometryCache;                                     // 0x8(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	int32                                        NumInterpolationPoints;                            // 0x10(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_BC8[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryCache*                        SourceGeometryCacheForTransfer;                    // 0x18(0x8)(BlueprintVisible, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	int32                                        MatchingSection;                                   // 0x20(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_BC9[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGroomBindingAsset*                    ReturnValue;                                       // 0x28(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HairStrandsCore.GroomComponent.SetPhysicsAsset
struct UGroomComponent_SetPhysicsAsset_Params
{
public:
	class UPhysicsAsset*                         InPhysicsAsset;                                    // 0x0(0x8)(Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HairStrandsCore.GroomComponent.SetMeshDeformer
struct UGroomComponent_SetMeshDeformer_Params
{
public:
	class UMeshDeformer*                         InMeshDeformer;                                    // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HairStrandsCore.GroomComponent.SetHairLengthScaleEnable
struct UGroomComponent_SetHairLengthScaleEnable_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HairStrandsCore.GroomComponent.SetHairLengthScale
struct UGroomComponent_SetHairLengthScale_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
};

// 0x8 (0x8 - 0x0)
// Function HairStrandsCore.GroomComponent.SetGroomAsset
struct UGroomComponent_SetGroomAsset_Params
{
public:
	class UGroomAsset*                           Asset;                                             // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HairStrandsCore.GroomComponent.SetEnableSimulation
struct UGroomComponent_SetEnableSimulation_Params
{
public:
	bool                                         bInEnableSimulation;                               // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HairStrandsCore.GroomComponent.SetBindingAsset
struct UGroomComponent_SetBindingAsset_Params
{
public:
	class UGroomBindingAsset*                    InBinding;                                         // 0x0(0x8)(ConstParm, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HairStrandsCore.GroomComponent.GetNiagaraComponent
struct UGroomComponent_GetNiagaraComponent_Params
{
public:
	int32                                        GroupIndex;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_BE9[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UNiagaraComponent*                     ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HairStrandsCore.GroomComponent.GetIsHairLengthScaleEnabled
struct UGroomComponent_GetIsHairLengthScaleEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HairStrandsCore.GroomComponent.AddCollisionComponent
struct UGroomComponent_AddCollisionComponent_Params
{
public:
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x0(0x8)(Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
};

}
}


