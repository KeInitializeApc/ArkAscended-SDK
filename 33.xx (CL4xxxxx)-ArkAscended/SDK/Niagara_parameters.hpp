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

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadVector4
struct UNiagaraDataChannelReader_ReadVector4_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_36F[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              ReturnValue;                                       // 0x10(0x20)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadVector2D
struct UNiagaraDataChannelReader_ReadVector2D_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_371[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadVector
struct UNiagaraDataChannelReader_ReadVector_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_372[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadQuat
struct UNiagaraDataChannelReader_ReadQuat_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_376[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 ReturnValue;                                       // 0x10(0x20)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadLinearColor
struct UNiagaraDataChannelReader_ReadLinearColor_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FLinearColor                          ReturnValue;                                       // 0xC(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadInt
struct UNiagaraDataChannelReader_ReadInt_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	int32                                        ReturnValue;                                       // 0xC(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadFloat
struct UNiagaraDataChannelReader_ReadFloat_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_37B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadBool
struct UNiagaraDataChannelReader_ReadBool_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_37F[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraDataChannelReader.Num
struct UNiagaraDataChannelReader_Num_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataChannelReader.InitAccess
struct UNiagaraDataChannelReader_InitAccess_Params
{
public:
	class UActorComponent*                       OwningComponent;                                   // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_386[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteVector4
struct UNiagaraDataChannelWriter_WriteVector4_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_390[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              InData;                                            // 0x10(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteVector2D
struct UNiagaraDataChannelWriter_WriteVector2D_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_392[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             InData;                                            // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteVector
struct UNiagaraDataChannelWriter_WriteVector_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_393[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               InData;                                            // 0x10(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteSpawnInfo
struct UNiagaraDataChannelWriter_WriteSpawnInfo_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FNiagaraSpawnInfo                     InData;                                            // 0xC(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteQuat
struct UNiagaraDataChannelWriter_WriteQuat_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_394[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 InData;                                            // 0x10(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteLinearColor
struct UNiagaraDataChannelWriter_WriteLinearColor_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FLinearColor                          InData;                                            // 0xC(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteInt
struct UNiagaraDataChannelWriter_WriteInt_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	int32                                        InData;                                            // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteFloat
struct UNiagaraDataChannelWriter_WriteFloat_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_39B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       InData;                                            // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteBool
struct UNiagaraDataChannelWriter_WriteBool_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         InData;                                            // 0xC(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_39C[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.Num
struct UNiagaraDataChannelWriter_Num_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.InitWrite
struct UNiagaraDataChannelWriter_InitWrite_Params
{
public:
	class UActorComponent*                       OwningComponent;                                   // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Count;                                             // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)
	bool                                         bVisibleToGame;                                    // 0xC(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bVisibleToCPU;                                     // 0xD(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bVisibleToGPU;                                     // 0xE(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xF(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraDataChannelHandler.GetDataChannelWriter
struct UNiagaraDataChannelHandler_GetDataChannelWriter_Params
{
public:
	class UNiagaraDataChannelWriter*             ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraDataChannelHandler.GetDataChannelReader
struct UNiagaraDataChannelHandler_GetDataChannelReader_Params
{
public:
	class UNiagaraDataChannelReader*             ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataInterfaceStaticMesh.OnSourceEndPlay
struct UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Params
{
public:
	class AActor*                                InSource;                                          // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EEndPlayReason                    Reason;                                            // 0x8(0x1)(Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_42C[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceUObjectPropertyReader.SetUObjectReaderPropertyRemap
struct UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Params
{
public:
	class UNiagaraComponent*                     NiagaraComponent;                                  // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	class FName                                  UserParameterName;                                 // 0x8(0x8)(BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  GraphName;                                         // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  RemapName;                                         // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraActor.SetDestroyOnSystemFinish
struct ANiagaraActor_SetDestroyOnSystemFinish_Params
{
public:
	bool                                         bShouldDestroyOnSystemFinish;                      // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraActor.OnNiagaraSystemFinished
struct ANiagaraActor_OnNiagaraSystemFinished_Params
{
public:
	class UNiagaraComponent*                     FinishedComponent;                                 // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableVec4
struct UNiagaraComponent_SetVariableVec4_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_47F[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              InValue;                                           // 0x10(0x20)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableVec3
struct UNiagaraComponent_SetVariableVec3_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FVector                               InValue;                                           // 0x8(0x18)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableVec2
struct UNiagaraComponent_SetVariableVec2_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FVector2D                             InValue;                                           // 0x8(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget
struct UNiagaraComponent_SetVariableTextureRenderTarget_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class UTextureRenderTarget*                  TextureRenderTarget;                               // 0x8(0x8)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableTexture
struct UNiagaraComponent_SetVariableTexture_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class UTexture*                              Texture;                                           // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableStaticMesh
struct UNiagaraComponent_SetVariableStaticMesh_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class UStaticMesh*                           InValue;                                           // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableQuat
struct UNiagaraComponent_SetVariableQuat_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_48C[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 InValue;                                           // 0x10(0x20)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraComponent.SetVariablePosition
struct UNiagaraComponent_SetVariablePosition_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FVector                               InValue;                                           // 0x8(0x18)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableObject
struct UNiagaraComponent_SetVariableObject_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class UObject*                               Object;                                            // 0x8(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
};

// 0x90 (0x90 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableMatrix
struct UNiagaraComponent_SetVariableMatrix_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_494[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FMatrix                               InValue;                                           // 0x10(0x80)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableMaterial
struct UNiagaraComponent_SetVariableMaterial_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class UMaterialInterface*                    Object;                                            // 0x8(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableLinearColor
struct UNiagaraComponent_SetVariableLinearColor_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FLinearColor                          InValue;                                           // 0x8(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function Niagara.NiagaraComponent.SetVariableInt
struct UNiagaraComponent_SetVariableInt_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	int32                                        InValue;                                           // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function Niagara.NiagaraComponent.SetVariableFloat
struct UNiagaraComponent_SetVariableFloat_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        InValue;                                           // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function Niagara.NiagaraComponent.SetVariableBool
struct UNiagaraComponent_SetVariableBool_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         InValue;                                           // 0x8(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4A3[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableActor
struct UNiagaraComponent_SetVariableActor_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class AActor*                                Actor;                                             // 0x8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetTickBehavior
struct UNiagaraComponent_SetTickBehavior_Params
{
public:
	enum class ENiagaraTickBehavior              NewTickBehavior;                                   // 0x0(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function Niagara.NiagaraComponent.SetSystemFixedBounds
struct UNiagaraComponent_SetSystemFixedBounds_Params
{
public:
	struct FBox                                  LocalBounds;                                       // 0x0(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetSimCache
struct UNiagaraComponent_SetSimCache_Params
{
public:
	class UNiagaraSimCache*                      SimCache;                                          // 0x0(0x8)(Edit, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bResetSystem;                                      // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_4A8[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.SetSeekDelta
struct UNiagaraComponent_SetSeekDelta_Params
{
public:
	float                                        InSeekDelta;                                       // 0x0(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetRenderingEnabled
struct UNiagaraComponent_SetRenderingEnabled_Params
{
public:
	bool                                         bInRenderingEnabled;                               // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.SetRandomSeedOffset
struct UNiagaraComponent_SetRandomSeedOffset_Params
{
public:
	int32                                        NewRandomSeedOffset;                               // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function Niagara.NiagaraComponent.SetPreviewLODDistance
struct UNiagaraComponent_SetPreviewLODDistance_Params
{
public:
	bool                                         bEnablePreviewLODDistance;                         // 0x0(0x1)(Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_4AE[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        PreviewLODDistance;                                // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        PreviewMaxDistance;                                // 0x8(0x4)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetPaused
struct UNiagaraComponent_SetPaused_Params
{
public:
	bool                                         bInPaused;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
struct UNiagaraComponent_SetNiagaraVariableVec4_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FVector4                              InValue;                                           // 0x10(0x20)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
struct UNiagaraComponent_SetNiagaraVariableVec3_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FVector                               InValue;                                           // 0x10(0x18)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
struct UNiagaraComponent_SetNiagaraVariableVec2_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FVector2D                             InValue;                                           // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
struct UNiagaraComponent_SetNiagaraVariableQuat_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FQuat                                 InValue;                                           // 0x10(0x20)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariablePosition
struct UNiagaraComponent_SetNiagaraVariablePosition_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FVector                               InValue;                                           // 0x10(0x18)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableObject
struct UNiagaraComponent_SetNiagaraVariableObject_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class UObject*                               Object;                                            // 0x10(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
};

// 0x90 (0x90 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableMatrix
struct UNiagaraComponent_SetNiagaraVariableMatrix_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FMatrix                               InValue;                                           // 0x10(0x80)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
struct UNiagaraComponent_SetNiagaraVariableLinearColor_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FLinearColor                          InValue;                                           // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableInt
struct UNiagaraComponent_SetNiagaraVariableInt_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	int32                                        InValue;                                           // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4B4[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
struct UNiagaraComponent_SetNiagaraVariableFloat_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        InValue;                                           // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4B5[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
struct UNiagaraComponent_SetNiagaraVariableBool_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         InValue;                                           // 0x10(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4B7[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableActor
struct UNiagaraComponent_SetNiagaraVariableActor_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class AActor*                                Actor;                                             // 0x10(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.SetMaxSimTime
struct UNiagaraComponent_SetMaxSimTime_Params
{
public:
	float                                        InMaxTime;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta
struct UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta_Params
{
public:
	bool                                         bLock;                                             // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetGpuComputeDebug
struct UNiagaraComponent_SetGpuComputeDebug_Params
{
public:
	bool                                         bEnableDebug;                                      // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetForceSolo
struct UNiagaraComponent_SetForceSolo_Params
{
public:
	bool                                         bInForceSolo;                                      // 0x0(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetForceLocalPlayerEffect
struct UNiagaraComponent_SetForceLocalPlayerEffect_Params
{
public:
	bool                                         bIsPlayerEffect;                                   // 0x0(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function Niagara.NiagaraComponent.SetEmitterFixedBounds
struct UNiagaraComponent_SetEmitterFixedBounds_Params
{
public:
	class FName                                  EmitterName;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBox                                  LocalBounds;                                       // 0x8(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.SetDesiredAge
struct UNiagaraComponent_SetDesiredAge_Params
{
public:
	float                                        InDesiredAge;                                      // 0x0(0x4)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.SetCustomTimeDilation
struct UNiagaraComponent_SetCustomTimeDilation_Params
{
public:
	float                                        Dilation;                                          // 0x0(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
struct UNiagaraComponent_SetCanRenderWhileSeeking_Params
{
public:
	bool                                         bInCanRenderWhileSeeking;                          // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetAutoDestroy
struct UNiagaraComponent_SetAutoDestroy_Params
{
public:
	bool                                         bInAutoDestroy;                                    // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetAsset
struct UNiagaraComponent_SetAsset_Params
{
public:
	class UNiagaraSystem*                        InAsset;                                           // 0x0(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bResetExistingOverrideParameters;                  // 0x8(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_4C3[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetAllowScalability
struct UNiagaraComponent_SetAllowScalability_Params
{
public:
	bool                                         bAllow;                                            // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetAgeUpdateMode
struct UNiagaraComponent_SetAgeUpdateMode_Params
{
public:
	enum class ENiagaraAgeUpdateMode             InAgeUpdateMode;                                   // 0x0(0x1)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.SeekToDesiredAge
struct UNiagaraComponent_SeekToDesiredAge_Params
{
public:
	float                                        InDesiredAge;                                      // 0x0(0x4)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.IsPaused
struct UNiagaraComponent_IsPaused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.GetTickBehavior
struct UNiagaraComponent_GetTickBehavior_Params
{
public:
	enum class ENiagaraTickBehavior              ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function Niagara.NiagaraComponent.GetSystemFixedBounds
struct UNiagaraComponent_GetSystemFixedBounds_Params
{
public:
	struct FBox                                  ReturnValue;                                       // 0x0(0x38)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraComponent.GetSimCache
struct UNiagaraComponent_GetSimCache_Params
{
public:
	class UNiagaraSimCache*                      ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.GetSeekDelta
struct UNiagaraComponent_GetSeekDelta_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.GetRandomSeedOffset
struct UNiagaraComponent_GetRandomSeedOffset_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
struct UNiagaraComponent_GetPreviewLODDistanceEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.GetPreviewLODDistance
struct UNiagaraComponent_GetPreviewLODDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
struct UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Params
{
public:
	class FString                                InEmitterName;                                     // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                InValueName;                                       // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       ReturnValue;                                       // 0x20(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
struct UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Params
{
public:
	class FString                                InEmitterName;                                     // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                InValueName;                                       // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<float>                                ReturnValue;                                       // 0x20(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
struct UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Params
{
public:
	class FString                                InEmitterName;                                     // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.GetMaxSimTime
struct UNiagaraComponent_GetMaxSimTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta
struct UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.GetForceSolo
struct UNiagaraComponent_GetForceSolo_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.GetForceLocalPlayerEffect
struct UNiagaraComponent_GetForceLocalPlayerEffect_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function Niagara.NiagaraComponent.GetEmitterFixedBounds
struct UNiagaraComponent_GetEmitterFixedBounds_Params
{
public:
	class FName                                  EmitterName;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBox                                  ReturnValue;                                       // 0x8(0x38)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.GetDesiredAge
struct UNiagaraComponent_GetDesiredAge_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.GetDataInterface
struct UNiagaraComponent_GetDataInterface_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	class UNiagaraDataInterface*                 ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.GetCustomTimeDilation
struct UNiagaraComponent_GetCustomTimeDilation_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraComponent.GetAsset
struct UNiagaraComponent_GetAsset_Params
{
public:
	class UNiagaraSystem*                        ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.GetAllowScalability
struct UNiagaraComponent_GetAllowScalability_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.GetAgeUpdateMode
struct UNiagaraComponent_GetAgeUpdateMode_Params
{
public:
	enum class ENiagaraAgeUpdateMode             ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.ClearSimCache
struct UNiagaraComponent_ClearSimCache_Params
{
public:
	bool                                         bResetSystem;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraComponent.ClearEmitterFixedBounds
struct UNiagaraComponent_ClearEmitterFixedBounds_Params
{
public:
	class FName                                  EmitterName;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraComponent.AdvanceSimulationByTime
struct UNiagaraComponent_AdvanceSimulationByTime_Params
{
public:
	float                                        SimulateTime;                                      // 0x0(0x4)(ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        TickDeltaSeconds;                                  // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraComponent.AdvanceSimulation
struct UNiagaraComponent_AdvanceSimulation_Params
{
public:
	int32                                        TickCount;                                         // 0x0(0x4)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        TickDeltaSeconds;                                  // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataChannelLibrary.GetNiagaraDataChannel
struct UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  Channel;                                           // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UNiagaraDataChannelHandler*            ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_510[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Value;                                             // 0x18(0x18)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	bool                                         bSizeToFit;                                        // 0x30(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_511[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_514[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              Value;                                             // 0x20(0x20)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	bool                                         bSizeToFit;                                        // 0x40(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_515[0xF];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector4>                      ArrayData;                                         // 0x10(0x10)(Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_519[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Value;                                             // 0x18(0x10)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	bool                                         bSizeToFit;                                        // 0x28(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_51A[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     ArrayData;                                         // 0x10(0x10)(Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       ArrayData;                                         // 0x10(0x10)(Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8Value
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	int32                                        Value;                                             // 0x14(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	bool                                         bSizeToFit;                                        // 0x18(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_51E[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                ArrayData;                                         // 0x10(0x10)(Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_524[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Value;                                             // 0x20(0x20)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	bool                                         bSizeToFit;                                        // 0x40(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_525[0xF];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FQuat>                         ArrayData;                                         // 0x10(0x10)(Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPositionValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_52B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Value;                                             // 0x18(0x18)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	bool                                         bSizeToFit;                                        // 0x30(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_52C[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPosition
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       ArrayData;                                         // 0x10(0x10)(Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	int32                                        Value;                                             // 0x14(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	bool                                         bSizeToFit;                                        // 0x18(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_52F[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                ArrayData;                                         // 0x10(0x10)(Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	float                                        Value;                                             // 0x14(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	bool                                         bSizeToFit;                                        // 0x18(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_534[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                ArrayData;                                         // 0x10(0x10)(Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FLinearColor                          Value;                                             // 0x14(0x10)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	bool                                         bSizeToFit;                                        // 0x24(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_537[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLinearColor>                  ArrayData;                                         // 0x10(0x10)(Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         Value;                                             // 0x14(0x1)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	bool                                         bSizeToFit;                                        // 0x15(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_53D[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<bool>                                 ArrayData;                                         // 0x10(0x10)(Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_541[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x18(0x18)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_544[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              ReturnValue;                                       // 0x20(0x20)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector4>                      ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_54B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8Value
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	int32                                        ReturnValue;                                       // 0x14(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_558[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 ReturnValue;                                       // 0x20(0x20)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FQuat>                         ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPositionValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_55D[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x18(0x18)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPosition
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	int32                                        ReturnValue;                                       // 0x14(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	float                                        ReturnValue;                                       // 0x14(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FLinearColor                          ReturnValue;                                       // 0x14(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_566[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLinearColor>                  ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_569[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<bool>                                 ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
struct INiagaraParticleCallbackHandler_ReceiveParticleData_Params
{
public:
	TArray<struct FBasicParticleData>            Data;                                              // 0x0(0x10)(ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UNiagaraSystem*                        NiagaraSystem;                                     // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	struct FVector                               SimulationPositionOffset;                          // 0x18(0x18)(Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
struct UNiagaraDataInterfaceGrid2DCollection_GetTextureSize_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        SizeX;                                             // 0x8(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference)
	int32                                        SizeY;                                             // 0xC(0x4)(Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
struct UNiagaraDataInterfaceGrid2DCollection_GetRawTextureSize_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        SizeX;                                             // 0x8(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference)
	int32                                        SizeY;                                             // 0xC(0x4)(Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
struct UNiagaraDataInterfaceGrid2DCollection_FillTexture2D_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UTextureRenderTarget2D*                Dest;                                              // 0x8(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        AttributeIndex;                                    // 0x10(0x4)(ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_5BF[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
struct UNiagaraDataInterfaceGrid2DCollection_FillRawTexture2D_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UTextureRenderTarget2D*                Dest;                                              // 0x8(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TilesX;                                            // 0x10(0x4)(Edit, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TilesY;                                            // 0x14(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_5C6[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
struct UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        SizeX;                                             // 0x8(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference)
	int32                                        SizeY;                                             // 0xC(0x4)(Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	int32                                        SizeZ;                                             // 0x10(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config)
	uint8                                        Pad_5DB[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
struct UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        SizeX;                                             // 0x8(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference)
	int32                                        SizeY;                                             // 0xC(0x4)(Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	int32                                        SizeZ;                                             // 0x10(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config)
	uint8                                        Pad_5DD[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
struct UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UVolumeTexture*                        Dest;                                              // 0x8(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        AttributeIndex;                                    // 0x10(0x4)(ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_5DF[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
struct UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UVolumeTexture*                        Dest;                                              // 0x8(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TilesX;                                            // 0x10(0x4)(Edit, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TilesY;                                            // 0x14(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TileZ;                                             // 0x18(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_5E2[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary.SetSourceActors
struct UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class AActor*>                        SourceActors;                                      // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataInterfaceSkeletalMesh.OnSourceEndPlay
struct UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Params
{
public:
	class AActor*                                InSource;                                          // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EEndPlayReason                    Reason;                                            // 0x8(0x1)(Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_605[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttachedWithParams
struct UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Params
{
public:
	struct FFXSystemSpawnParameters              SpawnParams;                                       // 0x0(0x78)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UNiagaraComponent*                     ReturnValue;                                       // 0x78(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
struct UNiagaraFunctionLibrary_SpawnSystemAttached_Params
{
public:
	class UNiagaraSystem*                        SystemTemplate;                                    // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USceneComponent*                       AttachToComponent;                                 // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  AttachPointName;                                   // 0x10(0x8)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               Location;                                          // 0x18(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FRotator                              Rotation;                                          // 0x30(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	enum class EAttachLocation                   LocationType;                                      // 0x48(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAutoDestroy;                                      // 0x49(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAutoActivate;                                     // 0x4A(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ENCPoolMethod                     PoolingMethod;                                     // 0x4B(0x1)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bPreCullCheck;                                     // 0x4C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDontSpawnOutOfView;                               // 0x4D(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAllowSpawnLoopingFX;                              // 0x4E(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_63C[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	class UNiagaraComponent*                     ReturnValue;                                       // 0x50(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocationWithParams
struct UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Params
{
public:
	struct FFXSystemSpawnParameters              SpawnParams;                                       // 0x0(0x78)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UNiagaraComponent*                     ReturnValue;                                       // 0x78(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
struct UNiagaraFunctionLibrary_SpawnSystemAtLocation_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UNiagaraSystem*                        SystemTemplate;                                    // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               Location;                                          // 0x10(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FRotator                              Rotation;                                          // 0x28(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Scale;                                             // 0x40(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	bool                                         bAutoDestroy;                                      // 0x58(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAutoActivate;                                     // 0x59(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ENCPoolMethod                     PoolingMethod;                                     // 0x5A(0x1)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bPreCullCheck;                                     // 0x5B(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDontSpawnOutOfView;                               // 0x5C(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_63E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        DontSpawnOutOfViewCheckRadius;                     // 0x60(0x4)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAllowSpawnLoopingFX;                              // 0x64(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_63F[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UNiagaraComponent*                     ReturnValue;                                       // 0x68(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
struct UNiagaraFunctionLibrary_SetVolumeTextureObject_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FString                                OverrideName;                                      // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UVolumeTexture*                        Texture;                                           // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetTextureObject
struct UNiagaraFunctionLibrary_SetTextureObject_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FString                                OverrideName;                                      // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture*                              Texture;                                           // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject
struct UNiagaraFunctionLibrary_SetTexture2DArrayObject_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FString                                OverrideName;                                      // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2DArray*                       Texture;                                           // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
struct UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FString                                OverrideName;                                      // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          SamplingRegions;                                   // 0x18(0x10)(ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredSockets
struct UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FString                                OverrideName;                                      // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          FilteredSockets;                                   // 0x18(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredBones
struct UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FString                                OverrideName;                                      // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          FilteredBones;                                     // 0x18(0x10)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetComponentNiagaraGPURayTracedCollisionGroup
struct UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPrimitiveComponent*                   Primitive;                                         // 0x8(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, Config, EditConst)
	int32                                        CollisionGroup;                                    // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_640[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetActorNiagaraGPURayTracedCollisionGroup
struct UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class AActor*                                Actor;                                             // 0x8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	int32                                        CollisionGroup;                                    // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_644[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.ReleaseNiagaraGPURayTracedCollisionGroup
struct UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        CollisionGroup;                                    // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_645[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
struct UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FString                                OverrideName;                                      // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x18(0x8)(Edit, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
struct UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FString                                OverrideName;                                      // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UStaticMesh*                           StaticMesh;                                        // 0x18(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
struct UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
	class FString                                OverrideName;                                      // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x18(0x8)(Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
struct UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UNiagaraParameterCollection*           Collection;                                        // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	class UNiagaraParameterCollectionInstance*   ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.AcquireNiagaraGPURayTracedCollisionGroup
struct UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_649[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
struct UNiagaraParameterCollectionInstance_SetVectorParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FVector                               InValue;                                           // 0x10(0x18)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
struct UNiagaraParameterCollectionInstance_SetVector4Parameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FVector4                              InValue;                                           // 0x10(0x20)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
struct UNiagaraParameterCollectionInstance_SetVector2DParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FVector2D                             InValue;                                           // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
struct UNiagaraParameterCollectionInstance_SetQuatParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FQuat                                 InValue;                                           // 0x10(0x20)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
struct UNiagaraParameterCollectionInstance_SetIntParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	int32                                        InValue;                                           // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_664[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
struct UNiagaraParameterCollectionInstance_SetFloatParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        InValue;                                           // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_665[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
struct UNiagaraParameterCollectionInstance_SetColorParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FLinearColor                          InValue;                                           // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
struct UNiagaraParameterCollectionInstance_SetBoolParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         InValue;                                           // 0x10(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_667[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
struct UNiagaraParameterCollectionInstance_GetVectorParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
struct UNiagaraParameterCollectionInstance_GetVector4Parameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FVector4                              ReturnValue;                                       // 0x10(0x20)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
struct UNiagaraParameterCollectionInstance_GetVector2DParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FVector2D                             ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
struct UNiagaraParameterCollectionInstance_GetQuatParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FQuat                                 ReturnValue;                                       // 0x10(0x20)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
struct UNiagaraParameterCollectionInstance_GetIntParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_66B[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
struct UNiagaraParameterCollectionInstance_GetFloatParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_66C[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
struct UNiagaraParameterCollectionInstance_GetColorParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FLinearColor                          ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
struct UNiagaraParameterCollectionInstance_GetBoolParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_66D[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraBaselineController.OnTickTest
struct UNiagaraBaselineController_OnTickTest_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraBaselineController.OnOwnerTick
struct UNiagaraBaselineController_OnOwnerTick_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraBaselineController.OnEndTest
struct UNiagaraBaselineController_OnEndTest_Params
{
public:
	struct FNiagaraPerfBaselineStats             Stats;                                             // 0x0(0x10)(ConstParm, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraBaselineController.GetSystem
struct UNiagaraBaselineController_GetSystem_Params
{
public:
	class UNiagaraSystem*                        ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraPreviewBase.SetSystem
struct ANiagaraPreviewBase_SetSystem_Params
{
public:
	class UNiagaraSystem*                        InSystem;                                          // 0x0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraPreviewBase.SetLabelText
struct ANiagaraPreviewBase_SetLabelText_Params
{
public:
	class FText                                  InXAxisText;                                       // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FText                                  InYAxisText;                                       // 0x18(0x18)(BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraPreviewAxis.Num
struct UNiagaraPreviewAxis_Num_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraPreviewAxis.ApplyToPreview
struct UNiagaraPreviewAxis_ApplyToPreview_Params
{
public:
	class UNiagaraComponent*                     PreviewComponent;                                  // 0x0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        PreviewIndex;                                      // 0x8(0x4)(Edit, ConstParm, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsXAxis;                                          // 0xC(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6A0[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                OutLabelText;                                      // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraPreviewGrid.SetPaused
struct ANiagaraPreviewGrid_SetPaused_Params
{
public:
	bool                                         bPaused;                                           // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraPreviewGrid.GetPreviews
struct ANiagaraPreviewGrid_GetPreviews_Params
{
public:
	TArray<class UNiagaraComponent*>             OutPreviews;                                       // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraPreviewGrid.ActivatePreviews
struct ANiagaraPreviewGrid_ActivatePreviews_Params
{
public:
	bool                                         bReset;                                            // 0x0(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadVectorAttribute
struct UNiagaraSimCache_ReadVectorAttribute_Params
{
public:
	TArray<struct FVector>                       OutValues;                                         // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EmitterName;                                       // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FrameIndex;                                        // 0x20(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6C6[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadVector4Attribute
struct UNiagaraSimCache_ReadVector4Attribute_Params
{
public:
	TArray<struct FVector4>                      OutValues;                                         // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EmitterName;                                       // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FrameIndex;                                        // 0x20(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6C7[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadVector2Attribute
struct UNiagaraSimCache_ReadVector2Attribute_Params
{
public:
	TArray<struct FVector2D>                     OutValues;                                         // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EmitterName;                                       // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FrameIndex;                                        // 0x20(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6C8[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// Function Niagara.NiagaraSimCache.ReadQuatAttributeWithRebase
struct UNiagaraSimCache_ReadQuatAttributeWithRebase_Params
{
public:
	TArray<struct FQuat>                         OutValues;                                         // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FQuat                                 Quat;                                              // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm)
	class FName                                  AttributeName;                                     // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EmitterName;                                       // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FrameIndex;                                        // 0x40(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6CC[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadQuatAttribute
struct UNiagaraSimCache_ReadQuatAttribute_Params
{
public:
	TArray<struct FQuat>                         OutValues;                                         // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EmitterName;                                       // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLocalSpaceToWorld;                                // 0x20(0x1)(ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6CE[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        FrameIndex;                                        // 0x24(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function Niagara.NiagaraSimCache.ReadPositionAttributeWithRebase
struct UNiagaraSimCache_ReadPositionAttributeWithRebase_Params
{
public:
	TArray<struct FVector>                       OutValues;                                         // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	class FName                                  AttributeName;                                     // 0x70(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EmitterName;                                       // 0x78(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FrameIndex;                                        // 0x80(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6D1[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadPositionAttribute
struct UNiagaraSimCache_ReadPositionAttribute_Params
{
public:
	TArray<struct FVector>                       OutValues;                                         // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EmitterName;                                       // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLocalSpaceToWorld;                                // 0x20(0x1)(ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6D3[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        FrameIndex;                                        // 0x24(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadIntAttribute
struct UNiagaraSimCache_ReadIntAttribute_Params
{
public:
	TArray<int32>                                OutValues;                                         // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EmitterName;                                       // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FrameIndex;                                        // 0x20(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6D5[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadFloatAttribute
struct UNiagaraSimCache_ReadFloatAttribute_Params
{
public:
	TArray<float>                                OutValues;                                         // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EmitterName;                                       // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FrameIndex;                                        // 0x20(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6D8[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadColorAttribute
struct UNiagaraSimCache_ReadColorAttribute_Params
{
public:
	TArray<struct FLinearColor>                  OutValues;                                         // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EmitterName;                                       // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FrameIndex;                                        // 0x20(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6DB[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraSimCache.IsEmpty
struct UNiagaraSimCache_IsEmpty_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraSimCache.IsCacheValid
struct UNiagaraSimCache_IsCacheValid_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraSimCache.GetStartSeconds
struct UNiagaraSimCache_GetStartSeconds_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraSimCache.GetNumFrames
struct UNiagaraSimCache_GetNumFrames_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraSimCache.GetNumEmitters
struct UNiagaraSimCache_GetNumEmitters_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraSimCache.GetEmitterNames
struct UNiagaraSimCache_GetEmitterNames_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function Niagara.NiagaraSimCache.GetEmitterName
struct UNiagaraSimCache_GetEmitterName_Params
{
public:
	int32                                        EmitterIndex;                                      // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  ReturnValue;                                       // 0x4(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraSimCache.GetAttributeCaptureMode
struct UNiagaraSimCache_GetAttributeCaptureMode_Params
{
public:
	enum class ENiagaraSimCacheAttributeCaptureMode ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction Niagara.AsyncNiagaraCaptureSimCache.OnCaptureComplete__DelegateSignature
struct UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// Function Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheUntilComplete
struct UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Params
{
public:
	class UNiagaraSimCache*                      SimCache;                                          // 0x0(0x8)(Edit, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FNiagaraSimCacheCreateParameters      CreateParameters;                                  // 0x8(0x58)(ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class UNiagaraComponent*                     NiagaraComponent;                                  // 0x60(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	class UNiagaraSimCache*                      OutSimCache;                                       // 0x68(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        CaptureRate;                                       // 0x70(0x4)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bAdvanceSimulation;                                // 0x74(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_6EC[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        AdvanceDeltaTime;                                  // 0x78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_6ED[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UAsyncNiagaraCaptureSimCache*          ReturnValue;                                       // 0x80(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// Function Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheMultiFrame
struct UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Params
{
public:
	class UNiagaraSimCache*                      SimCache;                                          // 0x0(0x8)(Edit, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FNiagaraSimCacheCreateParameters      CreateParameters;                                  // 0x8(0x58)(ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class UNiagaraComponent*                     NiagaraComponent;                                  // 0x60(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	class UNiagaraSimCache*                      OutSimCache;                                       // 0x68(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        NumFrames;                                         // 0x70(0x4)(ConstParm, ExportObject, EditFixedSize, DisableEditOnInstance, DuplicateTransient)
	int32                                        CaptureRate;                                       // 0x74(0x4)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bAdvanceSimulation;                                // 0x78(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_6F2[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        AdvanceDeltaTime;                                  // 0x7C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class UAsyncNiagaraCaptureSimCache*          ReturnValue;                                       // 0x80(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraSimCacheFunctionLibrary.CreateNiagaraSimCache
struct UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UNiagaraSimCache*                      ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function Niagara.NiagaraSimCacheFunctionLibrary.CaptureNiagaraSimCacheImmediate
struct UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Params
{
public:
	class UNiagaraSimCache*                      SimCache;                                          // 0x0(0x8)(Edit, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FNiagaraSimCacheCreateParameters      CreateParameters;                                  // 0x8(0x58)(ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class UNiagaraComponent*                     NiagaraComponent;                                  // 0x60(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	class UNiagaraSimCache*                      OutSimCache;                                       // 0x68(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bAdvanceSimulation;                                // 0x70(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_6FC[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        AdvanceDeltaTime;                                  // 0x74(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x78(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_6FD[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

}
}


