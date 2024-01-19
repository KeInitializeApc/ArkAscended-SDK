#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0xB0 - 0x28)
// Class USDStage.UsdPrimTwin
class UUsdPrimTwin : public UObject
{
public:
	uint8                                        Pad_B3D[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                PrimPath;                                          // 0x40(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class USceneComponent>        SceneComponent;                                    // 0x50(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	TMap<class FString, class UUsdPrimTwin*>     Children;                                          // 0x58(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	TWeakObjectPtr<class UUsdPrimTwin>           Parent;                                            // 0xA8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUsdPrimTwin* GetDefaultObj();

};

// 0x290 (0x758 - 0x4C8)
// Class USDStage.UsdStageActor
class AUsdStageActor : public AActor
{
public:
	struct FFilePath                             RootLayer;                                         // 0x4C8(0x10)(Edit, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UUsdAssetCache2*                       UsdAssetCache;                                     // 0x4D8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	enum class EUsdInitialLoadSet                InitialLoadSet;                                    // 0x4E0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EUsdInterpolationType             InterpolationType;                                 // 0x4E1(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_B67[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        KindsToCollapse;                                   // 0x4E4(0x4)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bMergeIdenticalMaterialSlots;                      // 0x4E8(0x1)(Edit, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCollapseTopLevelPointInstancers;                  // 0x4E9(0x1)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B69[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        PurposesToLoad;                                    // 0x4EC(0x4)(ExportObject, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NaniteTriangleThreshold;                           // 0x4F0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  RenderContext;                                     // 0x4F4(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  MaterialPurpose;                                   // 0x4FC(0x8)(ConstParm, ExportObject, Net, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EUsdRootMotionHandling            RootMotionHandling;                                // 0x504(0x4)(Net, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B6B[0x78];                                     // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       SceneComponent;                                    // 0x580(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	float                                        Time;                                              // 0x588(0x4)(Edit, ConstParm, Net, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_B6D[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class ULevelSequence*                        LevelSequence;                                     // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	class UUsdPrimTwin*                          RootUsdTwin;                                       // 0x598(0x8)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSet<class FString>                          PrimsToAnimate;                                    // 0x5A0(0x50)(Edit, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class UObject*, class FString>          ObjectsToWatch;                                    // 0x5F0(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UUsdAssetCache*                        AssetCache;                                        // 0x640(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UUsdTransactor*                        Transactor;                                        // 0x648(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B6F[0x108];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AUsdStageActor* GetDefaultObj();

	void SetTime(float* InTime);
	void SetRootMotionHandling(enum class EUsdRootMotionHandling* NewHandlingStrategy);
	void SetRootLayer(class FString* RootFilePath);
	void SetRenderContext(class FName* NewRenderContext);
	void SetPurposesToLoad(int32* NewPurposesToLoad);
	void SetNaniteTriangleThreshold(int32* NewNaniteTriangleThreshold);
	void SetMergeIdenticalMaterialSlots(bool* bMerge);
	void SetMaterialPurpose(class FName* NewMaterialPurpose);
	void SetKindsToCollapse(int32* NewKindsToCollapse);
	void SetIsolatedRootLayer(class FString* IsolatedStageRootLayer);
	void SetInterpolationType(enum class EUsdInterpolationType* NewType);
	void SetInitialLoadSet(enum class EUsdInitialLoadSet* NewLoadSet);
	void SetCollapseTopLevelPointInstancers(bool* bCollapse);
	void SetAssetCache(class UUsdAssetCache2** NewCache);
	void NewStage();
	void GetTime(float ReturnValue);
	void GetSourcePrimPath(class UObject** Object, const class FString& ReturnValue);
	void GetLevelSequence(class ULevelSequence* ReturnValue);
	void GetIsolatedRootLayer(const class FString& ReturnValue);
	void GetGeneratedComponent(class FString* PrimPath, class USceneComponent* ReturnValue);
	void GetGeneratedAssets(class FString* PrimPath, const TArray<class UObject*>& ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class USDStage.UsdTransactor
class UUsdTransactor : public UObject
{
public:
	uint8                                        Pad_B71[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUsdTransactor* GetDefaultObj();

};

}


