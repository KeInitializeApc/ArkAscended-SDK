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

// 0x8 (0x8 - 0x0)
// Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
struct UNavigationSystemV1_UnregisterNavigationInvoker_Params
{
public:
	class AActor*                                Invoker;                                           // 0x0(0x8)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
struct UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Params
{
public:
	int32                                        MaxNumberOfJobs;                                   // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
struct UNavigationSystemV1_SetGeometryGatheringMode_Params
{
public:
	enum class ENavDataGatheringModeConfig       NewMode;                                           // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
struct UNavigationSystemV1_RegisterNavigationInvoker_Params
{
public:
	class AActor*                                Invoker;                                           // 0x0(0x8)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        TileGenerationRadius;                              // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        TileRemovalRadius;                                 // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigationEx
struct UNavigationSystemV1_ProjectPointToNavigationEx_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst)
	struct FVector                               Point;                                             // 0x8(0x18)(ConstParm, Parm, ReturnParm)
	struct FVector                               Extent;                                            // 0x20(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class ANavigationData*                       NavData;                                           // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x40(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0x48(0x18)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
struct UNavigationSystemV1_OnNavigationBoundsUpdated_Params
{
public:
	class ANavMeshBoundsVolume*                  NavVolume;                                         // 0x0(0x8)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function NavigationSystem.NavigationSystemV1.NavigationRaycast
struct UNavigationSystemV1_NavigationRaycast_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               RayStart;                                          // 0x8(0x18)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               RayEnd;                                            // 0x20(0x18)(ConstParm, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               HitLocation;                                       // 0x38(0x18)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x50(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class AController*                           Querier;                                           // 0x58(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_27B4[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
struct UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class UClass*                                OldArea;                                           // 0x8(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                NewArea;                                           // 0x10(0x8)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_27B9[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x68 (0x68 - 0x0)
// Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
struct UNavigationSystemV1_K2_ProjectPointToNavigation_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               Point;                                             // 0x8(0x18)(ConstParm, Parm, ReturnParm)
	struct FVector                               ProjectedLocation;                                 // 0x20(0x18)(Edit, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class ANavigationData*                       NavData;                                           // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x40(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               QueryExtent;                                       // 0x48(0x18)(ConstParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_27BD[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
struct UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               Origin;                                            // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               RandomLocation;                                    // 0x20(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        Radius;                                            // 0x38(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_27C3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class ANavigationData*                       NavData;                                           // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x48(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_27C5[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
struct UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               Origin;                                            // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               RandomLocation;                                    // 0x20(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        Radius;                                            // 0x38(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_27CF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class ANavigationData*                       NavData;                                           // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x48(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_27D1[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
struct UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               Origin;                                            // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               RandomLocation;                                    // 0x20(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        Radius;                                            // 0x38(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_27D7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class ANavigationData*                       NavData;                                           // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x48(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_27D8[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
struct UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_27DE[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
struct UNavigationSystemV1_IsNavigationBeingBuilt_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_27E0[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x78 (0x78 - 0x0)
// Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInMinMaxRadius
struct UNavigationSystemV1_GetRandomReachablePointInMinMaxRadius_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst)
	struct FVector                               Origin;                                            // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        MinRadius;                                         // 0x20(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MaxRadius;                                         // 0x24(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	struct FRandomStream                         RandStream;                                        // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               PathDirection;                                     // 0x30(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        DotLimit;                                          // 0x48(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_27EB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class ANavigationData*                       NavData;                                           // 0x50(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x58(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0x60(0x18)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function NavigationSystem.NavigationSystemV1.GetPathLength
struct UNavigationSystemV1_GetPathLength_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               PathStart;                                         // 0x8(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               PathEnd;                                           // 0x20(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       PathLength;                                        // 0x38(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class ANavigationData*                       NavData;                                           // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x48(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ENavigationQueryResult            ReturnValue;                                       // 0x50(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_27F7[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// Function NavigationSystem.NavigationSystemV1.GetPathCost
struct UNavigationSystemV1_GetPathCost_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               PathStart;                                         // 0x8(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               PathEnd;                                           // 0x20(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       PathCost;                                          // 0x38(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class ANavigationData*                       NavData;                                           // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x48(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ENavigationQueryResult            ReturnValue;                                       // 0x50(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2800[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
struct UNavigationSystemV1_GetNavigationSystem_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UNavigationSystemV1*                   ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
struct UNavigationSystemV1_FindPathToLocationSynchronously_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               PathStart;                                         // 0x8(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               PathEnd;                                           // 0x20(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class AActor*                                PathfindingContext;                                // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x40(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UNavigationPath*                       ReturnValue;                                       // 0x48(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
struct UNavigationSystemV1_FindPathToActorSynchronously_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               PathStart;                                         // 0x8(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class AActor*                                GoalActor;                                         // 0x20(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        TetherDistance;                                    // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_280C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                PathfindingContext;                                // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x38(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UNavigationPath*                       ReturnValue;                                       // 0x40(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
struct UNavRelevantComponent_SetNavigationRelevancy_Params
{
public:
	bool                                         bRelevant;                                         // 0x0(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function NavigationSystem.NavModifierComponent.SetAreaClass
struct UNavModifierComponent_SetAreaClass_Params
{
public:
	class UClass*                                NewAreaClass;                                      // 0x0(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
struct ARecastNavMesh_K2_ReplaceAreaInTileBounds_Params
{
public:
	struct FBox                                  Bounds;                                            // 0x0(0x38)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                OldArea;                                           // 0x38(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                NewArea;                                           // 0x40(0x8)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReplaceLinks;                                      // 0x48(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x49(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2846[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function NavigationSystem.NavigationPath.IsValid
struct UNavigationPath_IsValid_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function NavigationSystem.NavigationPath.IsStringPulled
struct UNavigationPath_IsStringPulled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function NavigationSystem.NavigationPath.IsPartial
struct UNavigationPath_IsPartial_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function NavigationSystem.NavigationPath.GetPathLength
struct UNavigationPath_GetPathLength_Params
{
public:
	double                                       ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function NavigationSystem.NavigationPath.GetPathCost
struct UNavigationPath_GetPathCost_Params
{
public:
	double                                       ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function NavigationSystem.NavigationPath.GetDebugString
struct UNavigationPath_GetDebugString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
struct UNavigationPath_EnableRecalculationOnInvalidation_Params
{
public:
	enum class ENavigationOptionFlag             DoRecalculation;                                   // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function NavigationSystem.NavigationPath.EnableDebugDrawing
struct UNavigationPath_EnableDebugDrawing_Params
{
public:
	bool                                         bShouldDrawDebugData;                              // 0x0(0x1)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2889[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          PathColor;                                         // 0x4(0x10)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function NavigationSystem.NavModifierVolume.SetAreaClass
struct ANavModifierVolume_SetAreaClass_Params
{
public:
	class UClass*                                NewAreaClass;                                      // 0x0(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

}
}


