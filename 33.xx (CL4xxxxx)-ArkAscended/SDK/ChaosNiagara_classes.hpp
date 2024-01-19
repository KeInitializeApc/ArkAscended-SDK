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
	TSet<class AChaosSolverActor*>               ChaosSolverActorSet;                               // 0x38(0x50)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EDataSourceTypeEnum               DataSourceType;                                    // 0x88(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_222B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        DataProcessFrequency;                              // 0x8C(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        MaxNumberOfDataEntriesToSpawn;                     // 0x90(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         DoSpawn;                                           // 0x94(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_222C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             SpawnMultiplierMinMax;                             // 0x98(0x10)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        SpawnChance;                                       // 0xA8(0x4)(Edit, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_222D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ImpulseToSpawnMinMax;                              // 0xB0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             SpeedToSpawnMinMax;                                // 0xC0(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             MassToSpawnMinMax;                                 // 0xD0(0x10)(ConstParm, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             ExtentMinToSpawnMinMax;                            // 0xE0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             ExtentMaxToSpawnMinMax;                            // 0xF0(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             VolumeToSpawnMinMax;                               // 0x100(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             SolverTimeToSpawnMinMax;                           // 0x110(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        SurfaceTypeToSpawn;                                // 0x120(0x4)(ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ELocationFilteringModeEnum        LocationFilteringMode;                             // 0x124(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ELocationXToSpawnEnum             LocationXToSpawn;                                  // 0x125(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_222E[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             LocationXToSpawnMinMax;                            // 0x128(0x10)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ELocationYToSpawnEnum             LocationYToSpawn;                                  // 0x138(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_222F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             LocationYToSpawnMinMax;                            // 0x140(0x10)(ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ELocationZToSpawnEnum             LocationZToSpawn;                                  // 0x150(0x1)(Edit, ExportObject, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2230[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             LocationZToSpawnMinMax;                            // 0x158(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        TrailMinSpeedToSpawn;                              // 0x168(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EDataSortTypeEnum                 DataSortingType;                                   // 0x16C(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bGetExternalCollisionData;                         // 0x16D(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         DoSpatialHash;                                     // 0x16E(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2231[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               SpatialHashVolumeMin;                              // 0x170(0x18)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               SpatialHashVolumeMax;                              // 0x188(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               SpatialHashVolumeCellSize;                         // 0x1A0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        MaxDataPerCell;                                    // 0x1B8(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bApplyMaterialsFilter;                             // 0x1BC(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2232[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TSet<class UPhysicalMaterial*>               ChaosBreakingMaterialSet;                          // 0x1C0(0x50)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bGetExternalBreakingData;                          // 0x210(0x1)(Edit, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bGetExternalTrailingData;                          // 0x211(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2233[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             RandomPositionMagnitudeMinMax;                     // 0x218(0x10)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        InheritedVelocityMultiplier;                       // 0x228(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ERandomVelocityGenerationTypeEnum RandomVelocityGenerationType;                      // 0x22C(0x1)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2234[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             RandomVelocityMagnitudeMinMax;                     // 0x230(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        SpreadAngleMax;                                    // 0x240(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2235[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               VelocityOffsetMin;                                 // 0x248(0x18)(BlueprintVisible, Net, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               VelocityOffsetMax;                                 // 0x260(0x18)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             FinalVelocityMagnitudeMinMax;                      // 0x278(0x10)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxLatency;                                        // 0x288(0x4)(Edit, BlueprintVisible, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EDebugTypeEnum                    DebugType;                                         // 0x28C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2236[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        LastSpawnedPointID;                                // 0x290(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        LastSpawnTime;                                     // 0x294(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2238[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        SolverTime;                                        // 0x2A8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        TimeStampOfLastProcessedData;                      // 0x2AC(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2239[0x98];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceChaosDestruction* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class ChaosNiagara.NiagaraDataInterfaceGeometryCollection
class UNiagaraDataInterfaceGeometryCollection : public UNiagaraDataInterface
{
public:
	class AGeometryCollectionActor*              GeometryCollectionActor;                           // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

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


