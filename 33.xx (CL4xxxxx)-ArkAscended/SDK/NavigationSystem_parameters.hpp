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
	class AActor*                                Invoker;                                           // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
struct UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Params
{
public:
	int32                                        MaxNumberOfJobs;                                   // 0x0(0x4)(Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
struct UNavigationSystemV1_SetGeometryGatheringMode_Params
{
public:
	enum class ENavDataGatheringModeConfig       NewMode;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
struct UNavigationSystemV1_RegisterNavigationInvoker_Params
{
public:
	class AActor*                                Invoker;                                           // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	float                                        TileGenerationRadius;                              // 0x8(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        TileRemovalRadius;                                 // 0xC(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigationEx
struct UNavigationSystemV1_ProjectPointToNavigationEx_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
	struct FVector                               Point;                                             // 0x8(0x18)(ConstParm, Parm, ReturnParm)
	struct FVector                               Extent;                                            // 0x20(0x18)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class ANavigationData*                       NavData;                                           // 0x38(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x40(0x8)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0x48(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
struct UNavigationSystemV1_OnNavigationBoundsUpdated_Params
{
public:
	class ANavMeshBoundsVolume*                  NavVolume;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function NavigationSystem.NavigationSystemV1.NavigationRaycast
struct UNavigationSystemV1_NavigationRaycast_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               RayStart;                                          // 0x8(0x18)(BlueprintReadOnly, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               RayEnd;                                            // 0x20(0x18)(BlueprintVisible, ExportObject, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               HitLocation;                                       // 0x38(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x50(0x8)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class AController*                           Querier;                                           // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x60(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_53E[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
struct UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class UClass*                                OldArea;                                           // 0x8(0x8)(ConstParm, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                NewArea;                                           // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_544[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x68 (0x68 - 0x0)
// Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
struct UNavigationSystemV1_K2_ProjectPointToNavigation_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               Point;                                             // 0x8(0x18)(ConstParm, Parm, ReturnParm)
	struct FVector                               ProjectedLocation;                                 // 0x20(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditConst, InstancedReference, SubobjectReference)
	class ANavigationData*                       NavData;                                           // 0x38(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x40(0x8)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               QueryExtent;                                       // 0x48(0x18)(BlueprintVisible, ExportObject, Net, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x60(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_549[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
struct UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               Origin;                                            // 0x8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               RandomLocation;                                    // 0x20(0x18)(BlueprintVisible, Net, EditConst, InstancedReference, SubobjectReference)
	float                                        Radius;                                            // 0x38(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_556[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class ANavigationData*                       NavData;                                           // 0x40(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x48(0x8)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x50(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_558[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
struct UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               Origin;                                            // 0x8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               RandomLocation;                                    // 0x20(0x18)(BlueprintVisible, Net, EditConst, InstancedReference, SubobjectReference)
	float                                        Radius;                                            // 0x38(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_55B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class ANavigationData*                       NavData;                                           // 0x40(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x48(0x8)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x50(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_55C[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
struct UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               Origin;                                            // 0x8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               RandomLocation;                                    // 0x20(0x18)(BlueprintVisible, Net, EditConst, InstancedReference, SubobjectReference)
	float                                        Radius;                                            // 0x38(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_562[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class ANavigationData*                       NavData;                                           // 0x40(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x48(0x8)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x50(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_564[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
struct UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_568[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
struct UNavigationSystemV1_IsNavigationBeingBuilt_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_56E[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x78 (0x78 - 0x0)
// Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInMinMaxRadius
struct UNavigationSystemV1_GetRandomReachablePointInMinMaxRadius_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
	struct FVector                               Origin;                                            // 0x8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	float                                        MinRadius;                                         // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxRadius;                                         // 0x24(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FRandomStream                         RandStream;                                        // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               PathDirection;                                     // 0x30(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditConst, InstancedReference, SubobjectReference)
	float                                        DotLimit;                                          // 0x48(0x4)(Edit, BlueprintReadOnly, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_580[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class ANavigationData*                       NavData;                                           // 0x50(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x58(0x8)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0x60(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function NavigationSystem.NavigationSystemV1.GetPathLength
struct UNavigationSystemV1_GetPathLength_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               PathStart;                                         // 0x8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               PathEnd;                                           // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       PathLength;                                        // 0x38(0x8)(Edit, ConstParm, ExportObject, EditConst, InstancedReference, SubobjectReference)
	class ANavigationData*                       NavData;                                           // 0x40(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x48(0x8)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENavigationQueryResult            ReturnValue;                                       // 0x50(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_58C[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// Function NavigationSystem.NavigationSystemV1.GetPathCost
struct UNavigationSystemV1_GetPathCost_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               PathStart;                                         // 0x8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               PathEnd;                                           // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       PathCost;                                          // 0x38(0x8)(ConstParm, BlueprintVisible, EditConst, InstancedReference, SubobjectReference)
	class ANavigationData*                       NavData;                                           // 0x40(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x48(0x8)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENavigationQueryResult            ReturnValue;                                       // 0x50(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_59A[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
struct UNavigationSystemV1_GetNavigationSystem_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UNavigationSystemV1*                   ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
struct UNavigationSystemV1_FindPathToLocationSynchronously_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               PathStart;                                         // 0x8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               PathEnd;                                           // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class AActor*                                PathfindingContext;                                // 0x38(0x8)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x40(0x8)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UNavigationPath*                       ReturnValue;                                       // 0x48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
struct UNavigationSystemV1_FindPathToActorSynchronously_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               PathStart;                                         // 0x8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class AActor*                                GoalActor;                                         // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        TetherDistance;                                    // 0x28(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B7[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class AActor*                                PathfindingContext;                                // 0x30(0x8)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UClass*                                FilterClass;                                       // 0x38(0x8)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UNavigationPath*                       ReturnValue;                                       // 0x40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
struct UNavRelevantComponent_SetNavigationRelevancy_Params
{
public:
	bool                                         bRelevant;                                         // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function NavigationSystem.NavModifierComponent.SetAreaClass
struct UNavModifierComponent_SetAreaClass_Params
{
public:
	class UClass*                                NewAreaClass;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
struct ARecastNavMesh_K2_ReplaceAreaInTileBounds_Params
{
public:
	struct FBox                                  Bounds;                                            // 0x0(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                OldArea;                                           // 0x38(0x8)(ConstParm, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                NewArea;                                           // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReplaceLinks;                                      // 0x48(0x1)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x49(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_60C[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function NavigationSystem.NavigationPath.IsValid
struct UNavigationPath_IsValid_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function NavigationSystem.NavigationPath.IsStringPulled
struct UNavigationPath_IsStringPulled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function NavigationSystem.NavigationPath.IsPartial
struct UNavigationPath_IsPartial_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function NavigationSystem.NavigationPath.GetPathLength
struct UNavigationPath_GetPathLength_Params
{
public:
	double                                       ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function NavigationSystem.NavigationPath.GetPathCost
struct UNavigationPath_GetPathCost_Params
{
public:
	double                                       ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function NavigationSystem.NavigationPath.GetDebugString
struct UNavigationPath_GetDebugString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
struct UNavigationPath_EnableRecalculationOnInvalidation_Params
{
public:
	enum class ENavigationOptionFlag             DoRecalculation;                                   // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function NavigationSystem.NavigationPath.EnableDebugDrawing
struct UNavigationPath_EnableDebugDrawing_Params
{
public:
	bool                                         bShouldDrawDebugData;                              // 0x0(0x1)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_6A6[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          PathColor;                                         // 0x4(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function NavigationSystem.NavModifierVolume.SetAreaClass
struct ANavModifierVolume_SetAreaClass_Params
{
public:
	class UClass*                                NewAreaClass;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
};

}
}


