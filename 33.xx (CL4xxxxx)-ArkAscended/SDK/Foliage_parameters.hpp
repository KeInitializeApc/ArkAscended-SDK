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
	enum class ECollisionResponse                ReturnValue;                                       // 0x1(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Foliage.InstancedFoliageActor.BPGetInstancedFoliageActorForCurrentLevel
struct AInstancedFoliageActor_BPGetInstancedFoliageActorForCurrentLevel_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class AInstancedFoliageActor*                ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Foliage.InstancedFoliageActor.BPConvertStaticMeshActorsToFoliage
struct AInstancedFoliageActor_BPConvertStaticMeshActorsToFoliage_Params
{
public:
	TArray<class AStaticMeshActor*>              Actors;                                            // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class AStaticMeshActor*>              ConvertedActors;                                   // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
struct UFoliageStatistics_FoliageOverlappingSphereCount_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UStaticMesh*                           StaticMesh;                                        // 0x8(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	struct FVector                               CenterPosition;                                    // 0x10(0x18)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Radius;                                            // 0x28(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x2C(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function Foliage.FoliageStatistics.FoliageOverlappingBoxTransforms
struct UFoliageStatistics_FoliageOverlappingBoxTransforms_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UStaticMesh*                           StaticMesh;                                        // 0x8(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	struct FBox                                  Box;                                               // 0x10(0x38)(Edit, ConstParm, ExportObject, OutParm)
	TArray<struct FTransform>                    OutTransforms;                                     // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
struct UFoliageStatistics_FoliageOverlappingBoxCount_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UStaticMesh*                           StaticMesh;                                        // 0x8(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	struct FBox                                  Box;                                               // 0x10(0x38)(Edit, ConstParm, ExportObject, OutParm)
	int32                                        ReturnValue;                                       // 0x48(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_24F8[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x110 (0x110 - 0x0)
// Function Foliage.InteractiveFoliageActor.CapsuleTouched
struct AInteractiveFoliageActor_CapsuleTouched_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComp;                                    // 0x0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AActor*                                Other;                                             // 0x8(0x8)(Edit, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(ExportObject, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_24FF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            OverlapInfo;                                       // 0x20(0xF0)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Foliage.ProceduralFoliageSpawner.Simulate
struct UProceduralFoliageSpawner_Simulate_Params
{
public:
	int32                                        NumSteps;                                          // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

}
}


