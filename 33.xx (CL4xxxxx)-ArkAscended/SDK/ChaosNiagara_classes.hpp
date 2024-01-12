#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x310 (0x348 - 0x38)
// Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction
class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface
{
public:
	TSet<class AChaosSolverActor*>               ChaosSolverActorSet;                               // 0x38(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EDataSourceTypeEnum               DataSourceType;                                    // 0x88(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_245C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        DataProcessFrequency;                              // 0x8C(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        MaxNumberOfDataEntriesToSpawn;                     // 0x90(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         DoSpawn;                                           // 0x94(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2461[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             SpawnMultiplierMinMax;                             // 0x98(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        SpawnChance;                                       // 0xA8(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2462[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ImpulseToSpawnMinMax;                              // 0xB0(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             SpeedToSpawnMinMax;                                // 0xC0(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             MassToSpawnMinMax;                                 // 0xD0(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             ExtentMinToSpawnMinMax;                            // 0xE0(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             ExtentMaxToSpawnMinMax;                            // 0xF0(0x10)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             VolumeToSpawnMinMax;                               // 0x100(0x10)(Edit, Net, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             SolverTimeToSpawnMinMax;                           // 0x110(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        SurfaceTypeToSpawn;                                // 0x120(0x4)(ConstParm, ExportObject, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ELocationFilteringModeEnum        LocationFilteringMode;                             // 0x124(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ELocationXToSpawnEnum             LocationXToSpawn;                                  // 0x125(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2463[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             LocationXToSpawnMinMax;                            // 0x128(0x10)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ELocationYToSpawnEnum             LocationYToSpawn;                                  // 0x138(0x1)(Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2467[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             LocationYToSpawnMinMax;                            // 0x140(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ELocationZToSpawnEnum             LocationZToSpawn;                                  // 0x150(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2469[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             LocationZToSpawnMinMax;                            // 0x158(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        TrailMinSpeedToSpawn;                              // 0x168(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EDataSortTypeEnum                 DataSortingType;                                   // 0x16C(0x1)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bGetExternalCollisionData;                         // 0x16D(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         DoSpatialHash;                                     // 0x16E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_246B[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               SpatialHashVolumeMin;                              // 0x170(0x18)(ConstParm, ExportObject, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               SpatialHashVolumeMax;                              // 0x188(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               SpatialHashVolumeCellSize;                         // 0x1A0(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        MaxDataPerCell;                                    // 0x1B8(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bApplyMaterialsFilter;                             // 0x1BC(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_246C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TSet<class UPhysicalMaterial*>               ChaosBreakingMaterialSet;                          // 0x1C0(0x50)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bGetExternalBreakingData;                          // 0x210(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bGetExternalTrailingData;                          // 0x211(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_246E[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             RandomPositionMagnitudeMinMax;                     // 0x218(0x10)(ConstParm, BlueprintVisible, Net, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        InheritedVelocityMultiplier;                       // 0x228(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ERandomVelocityGenerationTypeEnum RandomVelocityGenerationType;                      // 0x22C(0x1)(ExportObject, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_246F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             RandomVelocityMagnitudeMinMax;                     // 0x230(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        SpreadAngleMax;                                    // 0x240(0x4)(BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2470[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               VelocityOffsetMin;                                 // 0x248(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               VelocityOffsetMax;                                 // 0x260(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             FinalVelocityMagnitudeMinMax;                      // 0x278(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxLatency;                                        // 0x288(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EDebugTypeEnum                    DebugType;                                         // 0x28C(0x1)(Edit, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2474[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        LastSpawnedPointID;                                // 0x290(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        LastSpawnTime;                                     // 0x294(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2475[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        SolverTime;                                        // 0x2A8(0x4)(Edit, ExportObject, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        TimeStampOfLastProcessedData;                      // 0x2AC(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2477[0x98];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceChaosDestruction* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class ChaosNiagara.NiagaraDataInterfaceGeometryCollection
class UNiagaraDataInterfaceGeometryCollection : public UNiagaraDataInterface
{
public:
	class AGeometryCollectionActor*              GeometryCollectionActor;                           // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGeometryCollection* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class ChaosNiagara.NiagaraDataInterfacePhysicsField
class UNiagaraDataInterfacePhysicsField : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfacePhysicsField* GetDefaultObj();

};

}


