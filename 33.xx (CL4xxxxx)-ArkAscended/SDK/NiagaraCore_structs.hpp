#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ENiagaraIterationSource : uint8
{
	Particles                      = 0,
	DataInterface                  = 1,
	DirectSet                      = 2,
	ENiagaraIterationSource_MAX    = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct NiagaraCore.NiagaraVariableCommonReference
struct FNiagaraVariableCommonReference
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	class UObject*                               UnderlyingType;                                    // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NiagaraCore.NiagaraCompileHash
struct FNiagaraCompileHash
{
public:
	TArray<uint8>                                DataHash;                                          // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


