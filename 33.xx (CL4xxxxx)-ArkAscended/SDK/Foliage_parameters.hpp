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
	enum class ECollisionChannel                 Channel;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	enum class ECollisionResponse                ReturnValue;                                       // 0x1(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Foliage.InstancedFoliageActor.BPGetInstancedFoliageActorForCurrentLevel
struct AInstancedFoliageActor_BPGetInstancedFoliageActorForCurrentLevel_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance)
	class AInstancedFoliageActor*                ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Foliage.InstancedFoliageActor.BPConvertStaticMeshActorsToFoliage
struct AInstancedFoliageActor_BPConvertStaticMeshActorsToFoliage_Params
{
public:
	TArray<class AStaticMeshActor*>              Actors;                                            // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class AStaticMeshActor*>              ConvertedActors;                                   // 0x10(0x10)(BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
struct UFoliageStatistics_FoliageOverlappingSphereCount_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UStaticMesh*                           StaticMesh;                                        // 0x8(0x8)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference)
	struct FVector                               CenterPosition;                                    // 0x10(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        Radius;                                            // 0x28(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x2C(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function Foliage.FoliageStatistics.FoliageOverlappingBoxTransforms
struct UFoliageStatistics_FoliageOverlappingBoxTransforms_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UStaticMesh*                           StaticMesh;                                        // 0x8(0x8)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference)
	struct FBox                                  Box;                                               // 0x10(0x38)(Edit, ConstParm, ExportObject, OutParm)
	TArray<struct FTransform>                    OutTransforms;                                     // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
struct UFoliageStatistics_FoliageOverlappingBoxCount_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UStaticMesh*                           StaticMesh;                                        // 0x8(0x8)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference)
	struct FBox                                  Box;                                               // 0x10(0x38)(Edit, ConstParm, ExportObject, OutParm)
	int32                                        ReturnValue;                                       // 0x48(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1EC0[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x110 (0x110 - 0x0)
// Function Foliage.InteractiveFoliageActor.CapsuleTouched
struct AInteractiveFoliageActor_CapsuleTouched_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComp;                                    // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class AActor*                                Other;                                             // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1ED3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            OverlapInfo;                                       // 0x20(0xF0)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Foliage.ProceduralFoliageSpawner.Simulate
struct UProceduralFoliageSpawner_Simulate_Params
{
public:
	int32                                        NumSteps;                                          // 0x0(0x4)(BlueprintVisible, ExportObject, ReturnParm, Config, InstancedReference, SubobjectReference)
};

}
}


