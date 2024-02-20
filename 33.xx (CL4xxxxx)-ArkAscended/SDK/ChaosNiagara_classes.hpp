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
	TSet<class AChaosSolverActor*>               ChaosSolverActorSet;                               // 0x38(0x50)(Edit, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EDataSourceTypeEnum               DataSourceType;                                    // 0x88(0x1)(Edit, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_15EE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        DataProcessFrequency;                              // 0x8C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        MaxNumberOfDataEntriesToSpawn;                     // 0x90(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         DoSpawn;                                           // 0x94(0x1)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_15F1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             SpawnMultiplierMinMax;                             // 0x98(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        SpawnChance;                                       // 0xA8(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_15F3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ImpulseToSpawnMinMax;                              // 0xB0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             SpeedToSpawnMinMax;                                // 0xC0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             MassToSpawnMinMax;                                 // 0xD0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             ExtentMinToSpawnMinMax;                            // 0xE0(0x10)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             ExtentMaxToSpawnMinMax;                            // 0xF0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             VolumeToSpawnMinMax;                               // 0x100(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             SolverTimeToSpawnMinMax;                           // 0x110(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        SurfaceTypeToSpawn;                                // 0x120(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class ELocationFilteringModeEnum        LocationFilteringMode;                             // 0x124(0x1)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class ELocationXToSpawnEnum             LocationXToSpawn;                                  // 0x125(0x1)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_15FF[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             LocationXToSpawnMinMax;                            // 0x128(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class ELocationYToSpawnEnum             LocationYToSpawn;                                  // 0x138(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1602[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             LocationYToSpawnMinMax;                            // 0x140(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class ELocationZToSpawnEnum             LocationZToSpawn;                                  // 0x150(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1605[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             LocationZToSpawnMinMax;                            // 0x158(0x10)(ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        TrailMinSpeedToSpawn;                              // 0x168(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EDataSortTypeEnum                 DataSortingType;                                   // 0x16C(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bGetExternalCollisionData;                         // 0x16D(0x1)(ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         DoSpatialHash;                                     // 0x16E(0x1)(ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_160B[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               SpatialHashVolumeMin;                              // 0x170(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               SpatialHashVolumeMax;                              // 0x188(0x18)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               SpatialHashVolumeCellSize;                         // 0x1A0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        MaxDataPerCell;                                    // 0x1B8(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bApplyMaterialsFilter;                             // 0x1BC(0x1)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1613[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TSet<class UPhysicalMaterial*>               ChaosBreakingMaterialSet;                          // 0x1C0(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bGetExternalBreakingData;                          // 0x210(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bGetExternalTrailingData;                          // 0x211(0x1)(Edit, Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1615[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             RandomPositionMagnitudeMinMax;                     // 0x218(0x10)(Edit, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        InheritedVelocityMultiplier;                       // 0x228(0x4)(ConstParm, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class ERandomVelocityGenerationTypeEnum RandomVelocityGenerationType;                      // 0x22C(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1618[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             RandomVelocityMagnitudeMinMax;                     // 0x230(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        SpreadAngleMax;                                    // 0x240(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_161A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               VelocityOffsetMin;                                 // 0x248(0x18)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               VelocityOffsetMax;                                 // 0x260(0x18)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             FinalVelocityMagnitudeMinMax;                      // 0x278(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxLatency;                                        // 0x288(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EDebugTypeEnum                    DebugType;                                         // 0x28C(0x1)(BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_161E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        LastSpawnedPointID;                                // 0x290(0x4)(ConstParm, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        LastSpawnTime;                                     // 0x294(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1622[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        SolverTime;                                        // 0x2A8(0x4)(BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        TimeStampOfLastProcessedData;                      // 0x2AC(0x4)(Edit, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1625[0x98];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceChaosDestruction* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class ChaosNiagara.NiagaraDataInterfaceGeometryCollection
class UNiagaraDataInterfaceGeometryCollection : public UNiagaraDataInterface
{
public:
	class AGeometryCollectionActor*              GeometryCollectionActor;                           // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

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


