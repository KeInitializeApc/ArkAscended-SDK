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
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_1B3[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              ReturnValue;                                       // 0x10(0x20)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadVector2D
struct UNiagaraDataChannelReader_ReadVector2D_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_1B6[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadVector
struct UNiagaraDataChannelReader_ReadVector_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_1BA[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadQuat
struct UNiagaraDataChannelReader_ReadQuat_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_1C1[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 ReturnValue;                                       // 0x10(0x20)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadLinearColor
struct UNiagaraDataChannelReader_ReadLinearColor_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FLinearColor                          ReturnValue;                                       // 0xC(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadInt
struct UNiagaraDataChannelReader_ReadInt_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	int32                                        ReturnValue;                                       // 0xC(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadFloat
struct UNiagaraDataChannelReader_ReadFloat_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_1C5[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadBool
struct UNiagaraDataChannelReader_ReadBool_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1CA[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraDataChannelReader.Num
struct UNiagaraDataChannelReader_Num_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataChannelReader.InitAccess
struct UNiagaraDataChannelReader_InitAccess_Params
{
public:
	class UActorComponent*                       OwningComponent;                                   // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1CD[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteVector4
struct UNiagaraDataChannelWriter_WriteVector4_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_1D5[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              InData;                                            // 0x10(0x20)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteVector2D
struct UNiagaraDataChannelWriter_WriteVector2D_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_1D6[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             InData;                                            // 0x10(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteVector
struct UNiagaraDataChannelWriter_WriteVector_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_1D7[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               InData;                                            // 0x10(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteSpawnInfo
struct UNiagaraDataChannelWriter_WriteSpawnInfo_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FNiagaraSpawnInfo                     InData;                                            // 0xC(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteQuat
struct UNiagaraDataChannelWriter_WriteQuat_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_1DA[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 InData;                                            // 0x10(0x20)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteLinearColor
struct UNiagaraDataChannelWriter_WriteLinearColor_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FLinearColor                          InData;                                            // 0xC(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteInt
struct UNiagaraDataChannelWriter_WriteInt_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	int32                                        InData;                                            // 0xC(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteFloat
struct UNiagaraDataChannelWriter_WriteFloat_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_1E5[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       InData;                                            // 0x10(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteBool
struct UNiagaraDataChannelWriter_WriteBool_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         InData;                                            // 0xC(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E7[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.Num
struct UNiagaraDataChannelWriter_Num_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.InitWrite
struct UNiagaraDataChannelWriter_InitWrite_Params
{
public:
	class UActorComponent*                       OwningComponent;                                   // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	int32                                        Count;                                             // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         bVisibleToGame;                                    // 0xC(0x1)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bVisibleToCPU;                                     // 0xD(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bVisibleToGPU;                                     // 0xE(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xF(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraDataChannelHandler.GetDataChannelWriter
struct UNiagaraDataChannelHandler_GetDataChannelWriter_Params
{
public:
	class UNiagaraDataChannelWriter*             ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraDataChannelHandler.GetDataChannelReader
struct UNiagaraDataChannelHandler_GetDataChannelReader_Params
{
public:
	class UNiagaraDataChannelReader*             ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataInterfaceStaticMesh.OnSourceEndPlay
struct UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Params
{
public:
	class AActor*                                InSource;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	enum class EEndPlayReason                    Reason;                                            // 0x8(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_247[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceUObjectPropertyReader.SetUObjectReaderPropertyRemap
struct UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Params
{
public:
	class UNiagaraComponent*                     NiagaraComponent;                                  // 0x0(0x8)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class FName                                  UserParameterName;                                 // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	class FName                                  GraphName;                                         // 0x10(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  RemapName;                                         // 0x18(0x8)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraActor.SetDestroyOnSystemFinish
struct ANiagaraActor_SetDestroyOnSystemFinish_Params
{
public:
	bool                                         bShouldDestroyOnSystemFinish;                      // 0x0(0x1)(ConstParm, BlueprintReadOnly, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraActor.OnNiagaraSystemFinished
struct ANiagaraActor_OnNiagaraSystemFinished_Params
{
public:
	class UNiagaraComponent*                     FinishedComponent;                                 // 0x0(0x8)(ExportObject, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableVec4
struct UNiagaraComponent_SetVariableVec4_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2A2[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              InValue;                                           // 0x10(0x20)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableVec3
struct UNiagaraComponent_SetVariableVec3_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               InValue;                                           // 0x8(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableVec2
struct UNiagaraComponent_SetVariableVec2_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector2D                             InValue;                                           // 0x8(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget
struct UNiagaraComponent_SetVariableTextureRenderTarget_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UTextureRenderTarget*                  TextureRenderTarget;                               // 0x8(0x8)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableTexture
struct UNiagaraComponent_SetVariableTexture_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UTexture*                              Texture;                                           // 0x8(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableStaticMesh
struct UNiagaraComponent_SetVariableStaticMesh_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UStaticMesh*                           InValue;                                           // 0x8(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableQuat
struct UNiagaraComponent_SetVariableQuat_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2C5[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 InValue;                                           // 0x10(0x20)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraComponent.SetVariablePosition
struct UNiagaraComponent_SetVariablePosition_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               InValue;                                           // 0x8(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableObject
struct UNiagaraComponent_SetVariableObject_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UObject*                               Object;                                            // 0x8(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
};

// 0x90 (0x90 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableMatrix
struct UNiagaraComponent_SetVariableMatrix_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E2[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FMatrix                               InValue;                                           // 0x10(0x80)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableMaterial
struct UNiagaraComponent_SetVariableMaterial_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UMaterialInterface*                    Object;                                            // 0x8(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableLinearColor
struct UNiagaraComponent_SetVariableLinearColor_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FLinearColor                          InValue;                                           // 0x8(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function Niagara.NiagaraComponent.SetVariableInt
struct UNiagaraComponent_SetVariableInt_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        InValue;                                           // 0x8(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function Niagara.NiagaraComponent.SetVariableFloat
struct UNiagaraComponent_SetVariableFloat_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InValue;                                           // 0x8(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function Niagara.NiagaraComponent.SetVariableBool
struct UNiagaraComponent_SetVariableBool_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         InValue;                                           // 0x8(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_302[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableActor
struct UNiagaraComponent_SetVariableActor_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class AActor*                                Actor;                                             // 0x8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetTickBehavior
struct UNiagaraComponent_SetTickBehavior_Params
{
public:
	enum class ENiagaraTickBehavior              NewTickBehavior;                                   // 0x0(0x1)(BlueprintVisible, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function Niagara.NiagaraComponent.SetSystemFixedBounds
struct UNiagaraComponent_SetSystemFixedBounds_Params
{
public:
	struct FBox                                  LocalBounds;                                       // 0x0(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetSimCache
struct UNiagaraComponent_SetSimCache_Params
{
public:
	class UNiagaraSimCache*                      SimCache;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
	bool                                         bResetSystem;                                      // 0x8(0x1)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_31B[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.SetSeekDelta
struct UNiagaraComponent_SetSeekDelta_Params
{
public:
	float                                        InSeekDelta;                                       // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetRenderingEnabled
struct UNiagaraComponent_SetRenderingEnabled_Params
{
public:
	bool                                         bInRenderingEnabled;                               // 0x0(0x1)(ConstParm, BlueprintReadOnly, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.SetRandomSeedOffset
struct UNiagaraComponent_SetRandomSeedOffset_Params
{
public:
	int32                                        NewRandomSeedOffset;                               // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function Niagara.NiagaraComponent.SetPreviewLODDistance
struct UNiagaraComponent_SetPreviewLODDistance_Params
{
public:
	bool                                         bEnablePreviewLODDistance;                         // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_330[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        PreviewLODDistance;                                // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        PreviewMaxDistance;                                // 0x8(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetPaused
struct UNiagaraComponent_SetPaused_Params
{
public:
	bool                                         bInPaused;                                         // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
struct UNiagaraComponent_SetNiagaraVariableVec4_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector4                              InValue;                                           // 0x10(0x20)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
struct UNiagaraComponent_SetNiagaraVariableVec3_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               InValue;                                           // 0x10(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
struct UNiagaraComponent_SetNiagaraVariableVec2_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector2D                             InValue;                                           // 0x10(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
struct UNiagaraComponent_SetNiagaraVariableQuat_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FQuat                                 InValue;                                           // 0x10(0x20)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariablePosition
struct UNiagaraComponent_SetNiagaraVariablePosition_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               InValue;                                           // 0x10(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableObject
struct UNiagaraComponent_SetNiagaraVariableObject_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UObject*                               Object;                                            // 0x10(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
};

// 0x90 (0x90 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableMatrix
struct UNiagaraComponent_SetNiagaraVariableMatrix_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FMatrix                               InValue;                                           // 0x10(0x80)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
struct UNiagaraComponent_SetNiagaraVariableLinearColor_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FLinearColor                          InValue;                                           // 0x10(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableInt
struct UNiagaraComponent_SetNiagaraVariableInt_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        InValue;                                           // 0x10(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_36C[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
struct UNiagaraComponent_SetNiagaraVariableFloat_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InValue;                                           // 0x10(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_372[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
struct UNiagaraComponent_SetNiagaraVariableBool_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         InValue;                                           // 0x10(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_389[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableActor
struct UNiagaraComponent_SetNiagaraVariableActor_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class AActor*                                Actor;                                             // 0x10(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.SetMaxSimTime
struct UNiagaraComponent_SetMaxSimTime_Params
{
public:
	float                                        InMaxTime;                                         // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta
struct UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta_Params
{
public:
	bool                                         bLock;                                             // 0x0(0x1)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetGpuComputeDebug
struct UNiagaraComponent_SetGpuComputeDebug_Params
{
public:
	bool                                         bEnableDebug;                                      // 0x0(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetForceSolo
struct UNiagaraComponent_SetForceSolo_Params
{
public:
	bool                                         bInForceSolo;                                      // 0x0(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetForceLocalPlayerEffect
struct UNiagaraComponent_SetForceLocalPlayerEffect_Params
{
public:
	bool                                         bIsPlayerEffect;                                   // 0x0(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function Niagara.NiagaraComponent.SetEmitterFixedBounds
struct UNiagaraComponent_SetEmitterFixedBounds_Params
{
public:
	class FName                                  EmitterName;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FBox                                  LocalBounds;                                       // 0x8(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.SetDesiredAge
struct UNiagaraComponent_SetDesiredAge_Params
{
public:
	float                                        InDesiredAge;                                      // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.SetCustomTimeDilation
struct UNiagaraComponent_SetCustomTimeDilation_Params
{
public:
	float                                        Dilation;                                          // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
struct UNiagaraComponent_SetCanRenderWhileSeeking_Params
{
public:
	bool                                         bInCanRenderWhileSeeking;                          // 0x0(0x1)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetAutoDestroy
struct UNiagaraComponent_SetAutoDestroy_Params
{
public:
	bool                                         bInAutoDestroy;                                    // 0x0(0x1)(ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetAsset
struct UNiagaraComponent_SetAsset_Params
{
public:
	class UNiagaraSystem*                        InAsset;                                           // 0x0(0x8)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bResetExistingOverrideParameters;                  // 0x8(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3C9[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetAllowScalability
struct UNiagaraComponent_SetAllowScalability_Params
{
public:
	bool                                         bAllow;                                            // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetAgeUpdateMode
struct UNiagaraComponent_SetAgeUpdateMode_Params
{
public:
	enum class ENiagaraAgeUpdateMode             InAgeUpdateMode;                                   // 0x0(0x1)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.SeekToDesiredAge
struct UNiagaraComponent_SeekToDesiredAge_Params
{
public:
	float                                        InDesiredAge;                                      // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.IsPaused
struct UNiagaraComponent_IsPaused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.GetTickBehavior
struct UNiagaraComponent_GetTickBehavior_Params
{
public:
	enum class ENiagaraTickBehavior              ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function Niagara.NiagaraComponent.GetSystemFixedBounds
struct UNiagaraComponent_GetSystemFixedBounds_Params
{
public:
	struct FBox                                  ReturnValue;                                       // 0x0(0x38)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraComponent.GetSimCache
struct UNiagaraComponent_GetSimCache_Params
{
public:
	class UNiagaraSimCache*                      ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.GetSeekDelta
struct UNiagaraComponent_GetSeekDelta_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.GetRandomSeedOffset
struct UNiagaraComponent_GetRandomSeedOffset_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
struct UNiagaraComponent_GetPreviewLODDistanceEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.GetPreviewLODDistance
struct UNiagaraComponent_GetPreviewLODDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
struct UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Params
{
public:
	class FString                                InEmitterName;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class FString                                InValueName;                                       // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       ReturnValue;                                       // 0x20(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
struct UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Params
{
public:
	class FString                                InEmitterName;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class FString                                InValueName;                                       // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TArray<float>                                ReturnValue;                                       // 0x20(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
struct UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Params
{
public:
	class FString                                InEmitterName;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.GetMaxSimTime
struct UNiagaraComponent_GetMaxSimTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta
struct UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.GetForceSolo
struct UNiagaraComponent_GetForceSolo_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.GetForceLocalPlayerEffect
struct UNiagaraComponent_GetForceLocalPlayerEffect_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function Niagara.NiagaraComponent.GetEmitterFixedBounds
struct UNiagaraComponent_GetEmitterFixedBounds_Params
{
public:
	class FName                                  EmitterName;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FBox                                  ReturnValue;                                       // 0x8(0x38)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.GetDesiredAge
struct UNiagaraComponent_GetDesiredAge_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.GetDataInterface
struct UNiagaraComponent_GetDataInterface_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	class UNiagaraDataInterface*                 ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.GetCustomTimeDilation
struct UNiagaraComponent_GetCustomTimeDilation_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraComponent.GetAsset
struct UNiagaraComponent_GetAsset_Params
{
public:
	class UNiagaraSystem*                        ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.GetAllowScalability
struct UNiagaraComponent_GetAllowScalability_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.GetAgeUpdateMode
struct UNiagaraComponent_GetAgeUpdateMode_Params
{
public:
	enum class ENiagaraAgeUpdateMode             ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.ClearSimCache
struct UNiagaraComponent_ClearSimCache_Params
{
public:
	bool                                         bResetSystem;                                      // 0x0(0x1)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraComponent.ClearEmitterFixedBounds
struct UNiagaraComponent_ClearEmitterFixedBounds_Params
{
public:
	class FName                                  EmitterName;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraComponent.AdvanceSimulationByTime
struct UNiagaraComponent_AdvanceSimulationByTime_Params
{
public:
	float                                        SimulateTime;                                      // 0x0(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        TickDeltaSeconds;                                  // 0x4(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraComponent.AdvanceSimulation
struct UNiagaraComponent_AdvanceSimulation_Params
{
public:
	int32                                        TickCount;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        TickDeltaSeconds;                                  // 0x4(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataChannelLibrary.GetNiagaraDataChannel
struct UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FName                                  Channel;                                           // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst)
	class UNiagaraDataChannelHandler*            ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_4DA[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Value;                                             // 0x18(0x18)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	bool                                         bSizeToFit;                                        // 0x30(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_4DB[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_4E8[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              Value;                                             // 0x20(0x20)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	bool                                         bSizeToFit;                                        // 0x40(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_4EA[0xF];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector4>                      ArrayData;                                         // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_4FE[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Value;                                             // 0x18(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	bool                                         bSizeToFit;                                        // 0x28(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_4FF[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     ArrayData;                                         // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       ArrayData;                                         // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8Value
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	int32                                        Value;                                             // 0x14(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	bool                                         bSizeToFit;                                        // 0x18(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_518[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                ArrayData;                                         // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_523[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Value;                                             // 0x20(0x20)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	bool                                         bSizeToFit;                                        // 0x40(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_524[0xF];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FQuat>                         ArrayData;                                         // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPositionValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_533[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Value;                                             // 0x18(0x18)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	bool                                         bSizeToFit;                                        // 0x30(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_534[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPosition
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       ArrayData;                                         // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	int32                                        Value;                                             // 0x14(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	bool                                         bSizeToFit;                                        // 0x18(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_53C[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                ArrayData;                                         // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        Value;                                             // 0x14(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	bool                                         bSizeToFit;                                        // 0x18(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_544[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                ArrayData;                                         // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FLinearColor                          Value;                                             // 0x14(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	bool                                         bSizeToFit;                                        // 0x24(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_54F[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLinearColor>                  ArrayData;                                         // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         Value;                                             // 0x14(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	bool                                         bSizeToFit;                                        // 0x15(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_571[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<bool>                                 ArrayData;                                         // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_579[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x18(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_57F[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              ReturnValue;                                       // 0x20(0x20)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector4>                      ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_58D[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8Value
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	int32                                        ReturnValue;                                       // 0x14(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_5A5[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 ReturnValue;                                       // 0x20(0x20)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FQuat>                         ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPositionValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_5AF[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x18(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPosition
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	int32                                        ReturnValue;                                       // 0x14(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        ReturnValue;                                       // 0x14(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FLinearColor                          ReturnValue;                                       // 0x14(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_5C9[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLinearColor>                  ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_5CC[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<bool>                                 ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
struct INiagaraParticleCallbackHandler_ReceiveParticleData_Params
{
public:
	TArray<struct FBasicParticleData>            Data;                                              // 0x0(0x10)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UNiagaraSystem*                        NiagaraSystem;                                     // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	struct FVector                               SimulationPositionOffset;                          // 0x18(0x18)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
struct UNiagaraDataInterfaceGrid2DCollection_GetTextureSize_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        SizeX;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
	int32                                        SizeY;                                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
struct UNiagaraDataInterfaceGrid2DCollection_GetRawTextureSize_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        SizeX;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
	int32                                        SizeY;                                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
struct UNiagaraDataInterfaceGrid2DCollection_FillTexture2D_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UTextureRenderTarget2D*                Dest;                                              // 0x8(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	int32                                        AttributeIndex;                                    // 0x10(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_64A[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
struct UNiagaraDataInterfaceGrid2DCollection_FillRawTexture2D_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UTextureRenderTarget2D*                Dest;                                              // 0x8(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	int32                                        TilesX;                                            // 0x10(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	int32                                        TilesY;                                            // 0x14(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_65A[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
struct UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        SizeX;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
	int32                                        SizeY;                                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	int32                                        SizeZ;                                             // 0x10(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_67D[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
struct UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        SizeX;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
	int32                                        SizeY;                                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	int32                                        SizeZ;                                             // 0x10(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_687[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
struct UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UVolumeTexture*                        Dest;                                              // 0x8(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	int32                                        AttributeIndex;                                    // 0x10(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_68F[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
struct UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UVolumeTexture*                        Dest;                                              // 0x8(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	int32                                        TilesX;                                            // 0x10(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	int32                                        TilesY;                                            // 0x14(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	int32                                        TileZ;                                             // 0x18(0x4)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_69A[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary.SetSourceActors
struct UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FName                                  OverrideName;                                      // 0x8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class AActor*>                        SourceActors;                                      // 0x10(0x10)(ConstParm, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataInterfaceSkeletalMesh.OnSourceEndPlay
struct UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Params
{
public:
	class AActor*                                InSource;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	enum class EEndPlayReason                    Reason;                                            // 0x8(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_6FD[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttachedWithParams
struct UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Params
{
public:
	struct FFXSystemSpawnParameters              SpawnParams;                                       // 0x0(0x78)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UNiagaraComponent*                     ReturnValue;                                       // 0x78(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
struct UNiagaraFunctionLibrary_SpawnSystemAttached_Params
{
public:
	class UNiagaraSystem*                        SystemTemplate;                                    // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class USceneComponent*                       AttachToComponent;                                 // 0x8(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class FName                                  AttachPointName;                                   // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               Location;                                          // 0x18(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FRotator                              Rotation;                                          // 0x30(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	enum class EAttachLocation                   LocationType;                                      // 0x48(0x1)(ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bAutoDestroy;                                      // 0x49(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bAutoActivate;                                     // 0x4A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	enum class ENCPoolMethod                     PoolingMethod;                                     // 0x4B(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bPreCullCheck;                                     // 0x4C(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bDontSpawnOutOfView;                               // 0x4D(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bAllowSpawnLoopingFX;                              // 0x4E(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_786[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	class UNiagaraComponent*                     ReturnValue;                                       // 0x50(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocationWithParams
struct UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Params
{
public:
	struct FFXSystemSpawnParameters              SpawnParams;                                       // 0x0(0x78)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UNiagaraComponent*                     ReturnValue;                                       // 0x78(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
struct UNiagaraFunctionLibrary_SpawnSystemAtLocation_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UNiagaraSystem*                        SystemTemplate;                                    // 0x8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               Location;                                          // 0x10(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FRotator                              Rotation;                                          // 0x28(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Scale;                                             // 0x40(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	bool                                         bAutoDestroy;                                      // 0x58(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bAutoActivate;                                     // 0x59(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	enum class ENCPoolMethod                     PoolingMethod;                                     // 0x5A(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bPreCullCheck;                                     // 0x5B(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bDontSpawnOutOfView;                               // 0x5C(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_798[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        DontSpawnOutOfViewCheckRadius;                     // 0x60(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bAllowSpawnLoopingFX;                              // 0x64(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_799[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UNiagaraComponent*                     ReturnValue;                                       // 0x68(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
struct UNiagaraFunctionLibrary_SetVolumeTextureObject_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FString                                OverrideName;                                      // 0x8(0x10)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UVolumeTexture*                        Texture;                                           // 0x18(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetTextureObject
struct UNiagaraFunctionLibrary_SetTextureObject_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FString                                OverrideName;                                      // 0x8(0x10)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTexture*                              Texture;                                           // 0x18(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject
struct UNiagaraFunctionLibrary_SetTexture2DArrayObject_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FString                                OverrideName;                                      // 0x8(0x10)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2DArray*                       Texture;                                           // 0x18(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
struct UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FString                                OverrideName;                                      // 0x8(0x10)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          SamplingRegions;                                   // 0x18(0x10)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredSockets
struct UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FString                                OverrideName;                                      // 0x8(0x10)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          FilteredSockets;                                   // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredBones
struct UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FString                                OverrideName;                                      // 0x8(0x10)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          FilteredBones;                                     // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetComponentNiagaraGPURayTracedCollisionGroup
struct UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UPrimitiveComponent*                   Primitive;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst)
	int32                                        CollisionGroup;                                    // 0x10(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_7C4[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetActorNiagaraGPURayTracedCollisionGroup
struct UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class AActor*                                Actor;                                             // 0x8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	int32                                        CollisionGroup;                                    // 0x10(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_7C9[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.ReleaseNiagaraGPURayTracedCollisionGroup
struct UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        CollisionGroup;                                    // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_7D2[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
struct UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FString                                OverrideName;                                      // 0x8(0x10)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x18(0x8)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
struct UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FString                                OverrideName;                                      // 0x8(0x10)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UStaticMesh*                           StaticMesh;                                        // 0x18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, GlobalConfig)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
struct UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class FString                                OverrideName;                                      // 0x8(0x10)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
struct UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UNiagaraParameterCollection*           Collection;                                        // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst)
	class UNiagaraParameterCollectionInstance*   ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.AcquireNiagaraGPURayTracedCollisionGroup
struct UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_7F3[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
struct UNiagaraParameterCollectionInstance_SetVectorParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               InValue;                                           // 0x10(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
struct UNiagaraParameterCollectionInstance_SetVector4Parameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector4                              InValue;                                           // 0x10(0x20)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
struct UNiagaraParameterCollectionInstance_SetVector2DParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector2D                             InValue;                                           // 0x10(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
struct UNiagaraParameterCollectionInstance_SetQuatParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FQuat                                 InValue;                                           // 0x10(0x20)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
struct UNiagaraParameterCollectionInstance_SetIntParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        InValue;                                           // 0x10(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_888[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
struct UNiagaraParameterCollectionInstance_SetFloatParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InValue;                                           // 0x10(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_88D[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
struct UNiagaraParameterCollectionInstance_SetColorParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FLinearColor                          InValue;                                           // 0x10(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
struct UNiagaraParameterCollectionInstance_SetBoolParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         InValue;                                           // 0x10(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_899[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
struct UNiagaraParameterCollectionInstance_GetVectorParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
struct UNiagaraParameterCollectionInstance_GetVector4Parameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector4                              ReturnValue;                                       // 0x10(0x20)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
struct UNiagaraParameterCollectionInstance_GetVector2DParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector2D                             ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
struct UNiagaraParameterCollectionInstance_GetQuatParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FQuat                                 ReturnValue;                                       // 0x10(0x20)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
struct UNiagaraParameterCollectionInstance_GetIntParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_8B2[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
struct UNiagaraParameterCollectionInstance_GetFloatParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_8BA[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
struct UNiagaraParameterCollectionInstance_GetColorParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FLinearColor                          ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
struct UNiagaraParameterCollectionInstance_GetBoolParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_8C1[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraBaselineController.OnTickTest
struct UNiagaraBaselineController_OnTickTest_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraBaselineController.OnOwnerTick
struct UNiagaraBaselineController_OnOwnerTick_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraBaselineController.OnEndTest
struct UNiagaraBaselineController_OnEndTest_Params
{
public:
	struct FNiagaraPerfBaselineStats             Stats;                                             // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraBaselineController.GetSystem
struct UNiagaraBaselineController_GetSystem_Params
{
public:
	class UNiagaraSystem*                        ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraPreviewBase.SetSystem
struct ANiagaraPreviewBase_SetSystem_Params
{
public:
	class UNiagaraSystem*                        InSystem;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraPreviewBase.SetLabelText
struct ANiagaraPreviewBase_SetLabelText_Params
{
public:
	class FText                                  InXAxisText;                                       // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FText                                  InYAxisText;                                       // 0x18(0x18)(ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraPreviewAxis.Num
struct UNiagaraPreviewAxis_Num_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraPreviewAxis.ApplyToPreview
struct UNiagaraPreviewAxis_ApplyToPreview_Params
{
public:
	class UNiagaraComponent*                     PreviewComponent;                                  // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        PreviewIndex;                                      // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bIsXAxis;                                          // 0xC(0x1)(ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_919[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                OutLabelText;                                      // 0x10(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraPreviewGrid.SetPaused
struct ANiagaraPreviewGrid_SetPaused_Params
{
public:
	bool                                         bPaused;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraPreviewGrid.GetPreviews
struct ANiagaraPreviewGrid_GetPreviews_Params
{
public:
	TArray<class UNiagaraComponent*>             OutPreviews;                                       // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraPreviewGrid.ActivatePreviews
struct ANiagaraPreviewGrid_ActivatePreviews_Params
{
public:
	bool                                         bReset;                                            // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadVectorAttribute
struct UNiagaraSimCache_ReadVectorAttribute_Params
{
public:
	TArray<struct FVector>                       OutValues;                                         // 0x0(0x10)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EmitterName;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FrameIndex;                                        // 0x20(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_990[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadVector4Attribute
struct UNiagaraSimCache_ReadVector4Attribute_Params
{
public:
	TArray<struct FVector4>                      OutValues;                                         // 0x0(0x10)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EmitterName;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FrameIndex;                                        // 0x20(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_99A[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadVector2Attribute
struct UNiagaraSimCache_ReadVector2Attribute_Params
{
public:
	TArray<struct FVector2D>                     OutValues;                                         // 0x0(0x10)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EmitterName;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FrameIndex;                                        // 0x20(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9A6[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// Function Niagara.NiagaraSimCache.ReadQuatAttributeWithRebase
struct UNiagaraSimCache_ReadQuatAttributeWithRebase_Params
{
public:
	TArray<struct FQuat>                         OutValues;                                         // 0x0(0x10)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FQuat                                 Quat;                                              // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm)
	class FName                                  AttributeName;                                     // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EmitterName;                                       // 0x38(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FrameIndex;                                        // 0x40(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9B1[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadQuatAttribute
struct UNiagaraSimCache_ReadQuatAttribute_Params
{
public:
	TArray<struct FQuat>                         OutValues;                                         // 0x0(0x10)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EmitterName;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLocalSpaceToWorld;                                // 0x20(0x1)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9C4[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        FrameIndex;                                        // 0x24(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function Niagara.NiagaraSimCache.ReadPositionAttributeWithRebase
struct UNiagaraSimCache_ReadPositionAttributeWithRebase_Params
{
public:
	TArray<struct FVector>                       OutValues;                                         // 0x0(0x10)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	class FName                                  AttributeName;                                     // 0x70(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EmitterName;                                       // 0x78(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FrameIndex;                                        // 0x80(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9D5[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadPositionAttribute
struct UNiagaraSimCache_ReadPositionAttribute_Params
{
public:
	TArray<struct FVector>                       OutValues;                                         // 0x0(0x10)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EmitterName;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLocalSpaceToWorld;                                // 0x20(0x1)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9EA[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        FrameIndex;                                        // 0x24(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadIntAttribute
struct UNiagaraSimCache_ReadIntAttribute_Params
{
public:
	TArray<int32>                                OutValues;                                         // 0x0(0x10)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EmitterName;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FrameIndex;                                        // 0x20(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9F4[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadFloatAttribute
struct UNiagaraSimCache_ReadFloatAttribute_Params
{
public:
	TArray<float>                                OutValues;                                         // 0x0(0x10)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EmitterName;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FrameIndex;                                        // 0x20(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9FF[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadColorAttribute
struct UNiagaraSimCache_ReadColorAttribute_Params
{
public:
	TArray<struct FLinearColor>                  OutValues;                                         // 0x0(0x10)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EmitterName;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FrameIndex;                                        // 0x20(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A0A[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraSimCache.IsEmpty
struct UNiagaraSimCache_IsEmpty_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraSimCache.IsCacheValid
struct UNiagaraSimCache_IsCacheValid_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraSimCache.GetStartSeconds
struct UNiagaraSimCache_GetStartSeconds_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraSimCache.GetNumFrames
struct UNiagaraSimCache_GetNumFrames_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraSimCache.GetNumEmitters
struct UNiagaraSimCache_GetNumEmitters_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraSimCache.GetEmitterNames
struct UNiagaraSimCache_GetEmitterNames_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function Niagara.NiagaraSimCache.GetEmitterName
struct UNiagaraSimCache_GetEmitterName_Params
{
public:
	int32                                        EmitterIndex;                                      // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  ReturnValue;                                       // 0x4(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraSimCache.GetAttributeCaptureMode
struct UNiagaraSimCache_GetAttributeCaptureMode_Params
{
public:
	enum class ENiagaraSimCacheAttributeCaptureMode ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction Niagara.AsyncNiagaraCaptureSimCache.OnCaptureComplete__DelegateSignature
struct UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// Function Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheUntilComplete
struct UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Params
{
public:
	class UNiagaraSimCache*                      SimCache;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
	struct FNiagaraSimCacheCreateParameters      CreateParameters;                                  // 0x8(0x58)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
	class UNiagaraComponent*                     NiagaraComponent;                                  // 0x60(0x8)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class UNiagaraSimCache*                      OutSimCache;                                       // 0x68(0x8)(Edit, BlueprintVisible, ExportObject, Net, Transient, Config, EditConst, SubobjectReference)
	int32                                        CaptureRate;                                       // 0x70(0x4)(ConstParm, BlueprintVisible, Net, Transient, Config, EditConst, SubobjectReference)
	bool                                         bAdvanceSimulation;                                // 0x74(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_A85[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        AdvanceDeltaTime;                                  // 0x78(0x4)(Edit, ConstParm, BlueprintReadOnly, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_A86[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UAsyncNiagaraCaptureSimCache*          ReturnValue;                                       // 0x80(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// Function Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheMultiFrame
struct UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Params
{
public:
	class UNiagaraSimCache*                      SimCache;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
	struct FNiagaraSimCacheCreateParameters      CreateParameters;                                  // 0x8(0x58)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
	class UNiagaraComponent*                     NiagaraComponent;                                  // 0x60(0x8)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class UNiagaraSimCache*                      OutSimCache;                                       // 0x68(0x8)(Edit, BlueprintVisible, ExportObject, Net, Transient, Config, EditConst, SubobjectReference)
	int32                                        NumFrames;                                         // 0x70(0x4)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DuplicateTransient)
	int32                                        CaptureRate;                                       // 0x74(0x4)(ConstParm, BlueprintVisible, Net, Transient, Config, EditConst, SubobjectReference)
	bool                                         bAdvanceSimulation;                                // 0x78(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_AAA[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        AdvanceDeltaTime;                                  // 0x7C(0x4)(Edit, ConstParm, BlueprintReadOnly, Transient, Config, EditConst, SubobjectReference)
	class UAsyncNiagaraCaptureSimCache*          ReturnValue;                                       // 0x80(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraSimCacheFunctionLibrary.CreateNiagaraSimCache
struct UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UNiagaraSimCache*                      ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function Niagara.NiagaraSimCacheFunctionLibrary.CaptureNiagaraSimCacheImmediate
struct UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Params
{
public:
	class UNiagaraSimCache*                      SimCache;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
	struct FNiagaraSimCacheCreateParameters      CreateParameters;                                  // 0x8(0x58)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
	class UNiagaraComponent*                     NiagaraComponent;                                  // 0x60(0x8)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class UNiagaraSimCache*                      OutSimCache;                                       // 0x68(0x8)(Edit, BlueprintVisible, ExportObject, Net, Transient, Config, EditConst, SubobjectReference)
	bool                                         bAdvanceSimulation;                                // 0x70(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_ADC[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        AdvanceDeltaTime;                                  // 0x74(0x4)(Edit, ConstParm, BlueprintReadOnly, Transient, Config, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x78(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_ADE[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

}
}


