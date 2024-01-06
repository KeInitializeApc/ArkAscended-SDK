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

// 0x2 (0x2 - 0x0)
// Function Foliage.FoliageType.GetResponseToChannel
struct UFoliageType_GetResponseToChannel_Params
{
public:
	enum class ECollisionChannel                 Channel;                                           // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	enum class ECollisionResponse                ReturnValue;                                       // 0x1(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Foliage.InstancedFoliageActor.BPGetInstancedFoliageActorForCurrentLevel
struct AInstancedFoliageActor_BPGetInstancedFoliageActorForCurrentLevel_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class AInstancedFoliageActor*                ReturnValue;                                       // 0x8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Foliage.InstancedFoliageActor.BPConvertStaticMeshActorsToFoliage
struct AInstancedFoliageActor_BPConvertStaticMeshActorsToFoliage_Params
{
public:
	TArray<class AStaticMeshActor*>              Actors;                                            // 0x0(0x10)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class AStaticMeshActor*>              ConvertedActors;                                   // 0x10(0x10)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
struct UFoliageStatistics_FoliageOverlappingSphereCount_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class UStaticMesh*                           StaticMesh;                                        // 0x8(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	struct FVector                               CenterPosition;                                    // 0x10(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Radius;                                            // 0x28(0x4)(EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x2C(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function Foliage.FoliageStatistics.FoliageOverlappingBoxTransforms
struct UFoliageStatistics_FoliageOverlappingBoxTransforms_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class UStaticMesh*                           StaticMesh;                                        // 0x8(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	struct FBox                                  Box;                                               // 0x10(0x38)(Edit, ConstParm, ExportObject, OutParm)
	TArray<struct FTransform>                    OutTransforms;                                     // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
struct UFoliageStatistics_FoliageOverlappingBoxCount_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class UStaticMesh*                           StaticMesh;                                        // 0x8(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	struct FBox                                  Box;                                               // 0x10(0x38)(Edit, ConstParm, ExportObject, OutParm)
	int32                                        ReturnValue;                                       // 0x48(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1C70[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x110 (0x110 - 0x0)
// Function Foliage.InteractiveFoliageActor.CapsuleTouched
struct AInteractiveFoliageActor_CapsuleTouched_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComp;                                    // 0x0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AActor*                                Other;                                             // 0x8(0x8)(Edit, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1CA2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            OverlapInfo;                                       // 0x20(0xF0)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Foliage.ProceduralFoliageSpawner.Simulate
struct UProceduralFoliageSpawner_Simulate_Params
{
public:
	int32                                        NumSteps;                                          // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

}
}

