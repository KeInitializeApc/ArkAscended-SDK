#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Niagara.NDIRenderTargetVolumeSimCacheData
// (None)

class UClass* UNDIRenderTargetVolumeSimCacheData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NDIRenderTargetVolumeSimCacheData");

	return Clss;
}


// NDIRenderTargetVolumeSimCacheData Niagara.Default__NDIRenderTargetVolumeSimCacheData
// (Public, ClassDefaultObject, ArchetypeObject)

class UNDIRenderTargetVolumeSimCacheData* UNDIRenderTargetVolumeSimCacheData::GetDefaultObj()
{
	static class UNDIRenderTargetVolumeSimCacheData* Default = nullptr;

	if (!Default)
		Default = static_cast<UNDIRenderTargetVolumeSimCacheData*>(UNDIRenderTargetVolumeSimCacheData::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraConvertInPlaceUtilityBase
// (None)

class UClass* UNiagaraConvertInPlaceUtilityBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraConvertInPlaceUtilityBase");

	return Clss;
}


// NiagaraConvertInPlaceUtilityBase Niagara.Default__NiagaraConvertInPlaceUtilityBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraConvertInPlaceUtilityBase* UNiagaraConvertInPlaceUtilityBase::GetDefaultObj()
{
	static class UNiagaraConvertInPlaceUtilityBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraConvertInPlaceUtilityBase*>(UNiagaraConvertInPlaceUtilityBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataChannelReader
// (None)

class UClass* UNiagaraDataChannelReader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataChannelReader");

	return Clss;
}


// NiagaraDataChannelReader Niagara.Default__NiagaraDataChannelReader
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataChannelReader* UNiagaraDataChannelReader::GetDefaultObj()
{
	static class UNiagaraDataChannelReader* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataChannelReader*>(UNiagaraDataChannelReader::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraDataChannelReader.ReadVector4
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        VarName                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FVector4                    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector4 UNiagaraDataChannelReader::ReadVector4(class FName* VarName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelReader", "ReadVector4");

	Params::UNiagaraDataChannelReader_ReadVector4_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VarName != nullptr)
		*VarName = Parms.VarName;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataChannelReader.ReadVector2D
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        VarName                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D UNiagaraDataChannelReader::ReadVector2D(class FName* VarName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelReader", "ReadVector2D");

	Params::UNiagaraDataChannelReader_ReadVector2D_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VarName != nullptr)
		*VarName = Parms.VarName;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataChannelReader.ReadVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        VarName                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UNiagaraDataChannelReader::ReadVector(class FName* VarName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelReader", "ReadVector");

	Params::UNiagaraDataChannelReader_ReadVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VarName != nullptr)
		*VarName = Parms.VarName;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataChannelReader.ReadQuat
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        VarName                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FQuat                       ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FQuat UNiagaraDataChannelReader::ReadQuat(class FName* VarName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelReader", "ReadQuat");

	Params::UNiagaraDataChannelReader_ReadQuat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VarName != nullptr)
		*VarName = Parms.VarName;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataChannelReader.ReadLinearColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        VarName                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FLinearColor                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FLinearColor UNiagaraDataChannelReader::ReadLinearColor(class FName* VarName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelReader", "ReadLinearColor");

	Params::UNiagaraDataChannelReader_ReadLinearColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VarName != nullptr)
		*VarName = Parms.VarName;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataChannelReader.ReadInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        VarName                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UNiagaraDataChannelReader::ReadInt(class FName* VarName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelReader", "ReadInt");

	Params::UNiagaraDataChannelReader_ReadInt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VarName != nullptr)
		*VarName = Parms.VarName;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataChannelReader.ReadFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        VarName                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// double                             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

double UNiagaraDataChannelReader::ReadFloat(class FName* VarName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelReader", "ReadFloat");

	Params::UNiagaraDataChannelReader_ReadFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VarName != nullptr)
		*VarName = Parms.VarName;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataChannelReader.ReadBool
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        VarName                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNiagaraDataChannelReader::ReadBool(class FName* VarName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelReader", "ReadBool");

	Params::UNiagaraDataChannelReader_ReadBool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VarName != nullptr)
		*VarName = Parms.VarName;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataChannelReader.Num
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UNiagaraDataChannelReader::Num()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelReader", "Num");

	Params::UNiagaraDataChannelReader_Num_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataChannelReader.InitAccess
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*             OwningComponent                                                  (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNiagaraDataChannelReader::InitAccess(class UActorComponent** OwningComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelReader", "InitAccess");

	Params::UNiagaraDataChannelReader_InitAccess_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OwningComponent != nullptr)
		*OwningComponent = Parms.OwningComponent;

	return Parms.ReturnValue;

}


// Class Niagara.NiagaraDataChannelWriter
// (None)

class UClass* UNiagaraDataChannelWriter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataChannelWriter");

	return Clss;
}


// NiagaraDataChannelWriter Niagara.Default__NiagaraDataChannelWriter
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataChannelWriter* UNiagaraDataChannelWriter::GetDefaultObj()
{
	static class UNiagaraDataChannelWriter* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataChannelWriter*>(UNiagaraDataChannelWriter::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraDataChannelWriter.WriteVector4
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        VarName                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FVector4                    InData                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)

int32 UNiagaraDataChannelWriter::WriteVector4(class FName* VarName, struct FVector4* InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelWriter", "WriteVector4");

	Params::UNiagaraDataChannelWriter_WriteVector4_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VarName != nullptr)
		*VarName = Parms.VarName;

	if (InData != nullptr)
		*InData = std::move(Parms.InData);

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataChannelWriter.WriteVector2D
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        VarName                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FVector2D                   InData                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)

int32 UNiagaraDataChannelWriter::WriteVector2D(class FName* VarName, struct FVector2D* InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelWriter", "WriteVector2D");

	Params::UNiagaraDataChannelWriter_WriteVector2D_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VarName != nullptr)
		*VarName = Parms.VarName;

	if (InData != nullptr)
		*InData = std::move(Parms.InData);

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataChannelWriter.WriteVector
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        VarName                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FVector                     InData                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)

int32 UNiagaraDataChannelWriter::WriteVector(class FName* VarName, struct FVector* InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelWriter", "WriteVector");

	Params::UNiagaraDataChannelWriter_WriteVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VarName != nullptr)
		*VarName = Parms.VarName;

	if (InData != nullptr)
		*InData = std::move(Parms.InData);

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataChannelWriter.WriteSpawnInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        VarName                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FNiagaraSpawnInfo           InData                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)

int32 UNiagaraDataChannelWriter::WriteSpawnInfo(class FName* VarName, struct FNiagaraSpawnInfo* InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelWriter", "WriteSpawnInfo");

	Params::UNiagaraDataChannelWriter_WriteSpawnInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VarName != nullptr)
		*VarName = Parms.VarName;

	if (InData != nullptr)
		*InData = std::move(Parms.InData);

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataChannelWriter.WriteQuat
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        VarName                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FQuat                       InData                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)

int32 UNiagaraDataChannelWriter::WriteQuat(class FName* VarName, struct FQuat* InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelWriter", "WriteQuat");

	Params::UNiagaraDataChannelWriter_WriteQuat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VarName != nullptr)
		*VarName = Parms.VarName;

	if (InData != nullptr)
		*InData = std::move(Parms.InData);

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataChannelWriter.WriteLinearColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        VarName                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FLinearColor                InData                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)

int32 UNiagaraDataChannelWriter::WriteLinearColor(class FName* VarName, struct FLinearColor* InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelWriter", "WriteLinearColor");

	Params::UNiagaraDataChannelWriter_WriteLinearColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VarName != nullptr)
		*VarName = Parms.VarName;

	if (InData != nullptr)
		*InData = std::move(Parms.InData);

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataChannelWriter.WriteInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        VarName                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// int32                              InData                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)

int32 UNiagaraDataChannelWriter::WriteInt(class FName* VarName, int32* InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelWriter", "WriteInt");

	Params::UNiagaraDataChannelWriter_WriteInt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VarName != nullptr)
		*VarName = Parms.VarName;

	if (InData != nullptr)
		*InData = Parms.InData;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataChannelWriter.WriteFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        VarName                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// double                             InData                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)

int32 UNiagaraDataChannelWriter::WriteFloat(class FName* VarName, double* InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelWriter", "WriteFloat");

	Params::UNiagaraDataChannelWriter_WriteFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VarName != nullptr)
		*VarName = Parms.VarName;

	if (InData != nullptr)
		*InData = Parms.InData;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataChannelWriter.WriteBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        VarName                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               InData                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)

int32 UNiagaraDataChannelWriter::WriteBool(class FName* VarName, bool* InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelWriter", "WriteBool");

	Params::UNiagaraDataChannelWriter_WriteBool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VarName != nullptr)
		*VarName = Parms.VarName;

	if (InData != nullptr)
		*InData = Parms.InData;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataChannelWriter.Num
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UNiagaraDataChannelWriter::Num()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelWriter", "Num");

	Params::UNiagaraDataChannelWriter_Num_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataChannelWriter.InitWrite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*             OwningComponent                                                  (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Count                                                            (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)
// bool                               bVisibleToGame                                                   (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bVisibleToCPU                                                    (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bVisibleToGPU                                                    (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNiagaraDataChannelWriter::InitWrite(class UActorComponent** OwningComponent, int32* Count, bool* bVisibleToGame, bool* bVisibleToCPU, bool* bVisibleToGPU)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelWriter", "InitWrite");

	Params::UNiagaraDataChannelWriter_InitWrite_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OwningComponent != nullptr)
		*OwningComponent = Parms.OwningComponent;

	if (Count != nullptr)
		*Count = Parms.Count;

	if (bVisibleToGame != nullptr)
		*bVisibleToGame = Parms.bVisibleToGame;

	if (bVisibleToCPU != nullptr)
		*bVisibleToCPU = Parms.bVisibleToCPU;

	if (bVisibleToGPU != nullptr)
		*bVisibleToGPU = Parms.bVisibleToGPU;

	return Parms.ReturnValue;

}


// Class Niagara.NiagaraDataChannelDefinitions
// (None)

class UClass* UNiagaraDataChannelDefinitions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataChannelDefinitions");

	return Clss;
}


// NiagaraDataChannelDefinitions Niagara.Default__NiagaraDataChannelDefinitions
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataChannelDefinitions* UNiagaraDataChannelDefinitions::GetDefaultObj()
{
	static class UNiagaraDataChannelDefinitions* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataChannelDefinitions*>(UNiagaraDataChannelDefinitions::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataChannelHandler
// (None)

class UClass* UNiagaraDataChannelHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataChannelHandler");

	return Clss;
}


// NiagaraDataChannelHandler Niagara.Default__NiagaraDataChannelHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataChannelHandler* UNiagaraDataChannelHandler::GetDefaultObj()
{
	static class UNiagaraDataChannelHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataChannelHandler*>(UNiagaraDataChannelHandler::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraDataChannelHandler.GetDataChannelWriter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraDataChannelWriter*   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UNiagaraDataChannelWriter* UNiagaraDataChannelHandler::GetDataChannelWriter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelHandler", "GetDataChannelWriter");

	Params::UNiagaraDataChannelHandler_GetDataChannelWriter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataChannelHandler.GetDataChannelReader
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraDataChannelReader*   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UNiagaraDataChannelReader* UNiagaraDataChannelHandler::GetDataChannelReader()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelHandler", "GetDataChannelReader");

	Params::UNiagaraDataChannelHandler_GetDataChannelReader_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Niagara.NiagaraDataChannel
// (None)

class UClass* UNiagaraDataChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataChannel");

	return Clss;
}


// NiagaraDataChannel Niagara.Default__NiagaraDataChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataChannel* UNiagaraDataChannel::GetDefaultObj()
{
	static class UNiagaraDataChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataChannel*>(UNiagaraDataChannel::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataChannel_Global
// (None)

class UClass* UNiagaraDataChannel_Global::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataChannel_Global");

	return Clss;
}


// NiagaraDataChannel_Global Niagara.Default__NiagaraDataChannel_Global
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataChannel_Global* UNiagaraDataChannel_Global::GetDefaultObj()
{
	static class UNiagaraDataChannel_Global* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataChannel_Global*>(UNiagaraDataChannel_Global::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataChannelHandler_Global
// (None)

class UClass* UNiagaraDataChannelHandler_Global::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataChannelHandler_Global");

	return Clss;
}


// NiagaraDataChannelHandler_Global Niagara.Default__NiagaraDataChannelHandler_Global
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataChannelHandler_Global* UNiagaraDataChannelHandler_Global::GetDefaultObj()
{
	static class UNiagaraDataChannelHandler_Global* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataChannelHandler_Global*>(UNiagaraDataChannelHandler_Global::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterface
// (None)

class UClass* UNiagaraDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterface");

	return Clss;
}


// NiagaraDataInterface Niagara.Default__NiagaraDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterface* UNiagaraDataInterface::GetDefaultObj()
{
	static class UNiagaraDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterface*>(UNiagaraDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceDataChannelRead
// (None)

class UClass* UNiagaraDataInterfaceDataChannelRead::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceDataChannelRead");

	return Clss;
}


// NiagaraDataInterfaceDataChannelRead Niagara.Default__NiagaraDataInterfaceDataChannelRead
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceDataChannelRead* UNiagaraDataInterfaceDataChannelRead::GetDefaultObj()
{
	static class UNiagaraDataInterfaceDataChannelRead* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceDataChannelRead*>(UNiagaraDataInterfaceDataChannelRead::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceDataChannelSpawn
// (None)

class UClass* UNiagaraDataInterfaceDataChannelSpawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceDataChannelSpawn");

	return Clss;
}


// NiagaraDataInterfaceDataChannelSpawn Niagara.Default__NiagaraDataInterfaceDataChannelSpawn
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceDataChannelSpawn* UNiagaraDataInterfaceDataChannelSpawn::GetDefaultObj()
{
	static class UNiagaraDataInterfaceDataChannelSpawn* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceDataChannelSpawn*>(UNiagaraDataInterfaceDataChannelSpawn::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceDataChannelWrite
// (None)

class UClass* UNiagaraDataInterfaceDataChannelWrite::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceDataChannelWrite");

	return Clss;
}


// NiagaraDataInterfaceDataChannelWrite Niagara.Default__NiagaraDataInterfaceDataChannelWrite
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceDataChannelWrite* UNiagaraDataInterfaceDataChannelWrite::GetDefaultObj()
{
	static class UNiagaraDataInterfaceDataChannelWrite* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceDataChannelWrite*>(UNiagaraDataInterfaceDataChannelWrite::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraMessageDataBase
// (None)

class UClass* UNiagaraMessageDataBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraMessageDataBase");

	return Clss;
}


// NiagaraMessageDataBase Niagara.Default__NiagaraMessageDataBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraMessageDataBase* UNiagaraMessageDataBase::GetDefaultObj()
{
	static class UNiagaraMessageDataBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraMessageDataBase*>(UNiagaraMessageDataBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraParameterDefinitionsBase
// (None)

class UClass* UNiagaraParameterDefinitionsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraParameterDefinitionsBase");

	return Clss;
}


// NiagaraParameterDefinitionsBase Niagara.Default__NiagaraParameterDefinitionsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraParameterDefinitionsBase* UNiagaraParameterDefinitionsBase::GetDefaultObj()
{
	static class UNiagaraParameterDefinitionsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraParameterDefinitionsBase*>(UNiagaraParameterDefinitionsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraRenderableMeshInterface
// (None)

class UClass* INiagaraRenderableMeshInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraRenderableMeshInterface");

	return Clss;
}


// NiagaraRenderableMeshInterface Niagara.Default__NiagaraRenderableMeshInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class INiagaraRenderableMeshInterface* INiagaraRenderableMeshInterface::GetDefaultObj()
{
	static class INiagaraRenderableMeshInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<INiagaraRenderableMeshInterface*>(INiagaraRenderableMeshInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraScriptSourceBase
// (None)

class UClass* UNiagaraScriptSourceBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraScriptSourceBase");

	return Clss;
}


// NiagaraScriptSourceBase Niagara.Default__NiagaraScriptSourceBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraScriptSourceBase* UNiagaraScriptSourceBase::GetDefaultObj()
{
	static class UNiagaraScriptSourceBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraScriptSourceBase*>(UNiagaraScriptSourceBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraSettings
// (None)

class UClass* UNiagaraSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraSettings");

	return Clss;
}


// NiagaraSettings Niagara.Default__NiagaraSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraSettings* UNiagaraSettings::GetDefaultObj()
{
	static class UNiagaraSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraSettings*>(UNiagaraSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraSimCacheCustomStorageInterface
// (None)

class UClass* INiagaraSimCacheCustomStorageInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraSimCacheCustomStorageInterface");

	return Clss;
}


// NiagaraSimCacheCustomStorageInterface Niagara.Default__NiagaraSimCacheCustomStorageInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class INiagaraSimCacheCustomStorageInterface* INiagaraSimCacheCustomStorageInterface::GetDefaultObj()
{
	static class INiagaraSimCacheCustomStorageInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<INiagaraSimCacheCustomStorageInterface*>(INiagaraSimCacheCustomStorageInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraValidationRuleSet
// (None)

class UClass* UNiagaraValidationRuleSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraValidationRuleSet");

	return Clss;
}


// NiagaraValidationRuleSet Niagara.Default__NiagaraValidationRuleSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraValidationRuleSet* UNiagaraValidationRuleSet::GetDefaultObj()
{
	static class UNiagaraValidationRuleSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraValidationRuleSet*>(UNiagaraValidationRuleSet::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceActorComponent
// (None)

class UClass* UNiagaraDataInterfaceActorComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceActorComponent");

	return Clss;
}


// NiagaraDataInterfaceActorComponent Niagara.Default__NiagaraDataInterfaceActorComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceActorComponent* UNiagaraDataInterfaceActorComponent::GetDefaultObj()
{
	static class UNiagaraDataInterfaceActorComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceActorComponent*>(UNiagaraDataInterfaceActorComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceAsyncGpuTrace
// (None)

class UClass* UNiagaraDataInterfaceAsyncGpuTrace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceAsyncGpuTrace");

	return Clss;
}


// NiagaraDataInterfaceAsyncGpuTrace Niagara.Default__NiagaraDataInterfaceAsyncGpuTrace
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceAsyncGpuTrace* UNiagaraDataInterfaceAsyncGpuTrace::GetDefaultObj()
{
	static class UNiagaraDataInterfaceAsyncGpuTrace* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceAsyncGpuTrace*>(UNiagaraDataInterfaceAsyncGpuTrace::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceDebugDraw
// (None)

class UClass* UNiagaraDataInterfaceDebugDraw::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceDebugDraw");

	return Clss;
}


// NiagaraDataInterfaceDebugDraw Niagara.Default__NiagaraDataInterfaceDebugDraw
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceDebugDraw* UNiagaraDataInterfaceDebugDraw::GetDefaultObj()
{
	static class UNiagaraDataInterfaceDebugDraw* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceDebugDraw*>(UNiagaraDataInterfaceDebugDraw::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceDynamicMesh
// (None)

class UClass* UNiagaraDataInterfaceDynamicMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceDynamicMesh");

	return Clss;
}


// NiagaraDataInterfaceDynamicMesh Niagara.Default__NiagaraDataInterfaceDynamicMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceDynamicMesh* UNiagaraDataInterfaceDynamicMesh::GetDefaultObj()
{
	static class UNiagaraDataInterfaceDynamicMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceDynamicMesh*>(UNiagaraDataInterfaceDynamicMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceEmitterProperties
// (None)

class UClass* UNiagaraDataInterfaceEmitterProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceEmitterProperties");

	return Clss;
}


// NiagaraDataInterfaceEmitterProperties Niagara.Default__NiagaraDataInterfaceEmitterProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceEmitterProperties* UNiagaraDataInterfaceEmitterProperties::GetDefaultObj()
{
	static class UNiagaraDataInterfaceEmitterProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceEmitterProperties*>(UNiagaraDataInterfaceEmitterProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceGBuffer
// (None)

class UClass* UNiagaraDataInterfaceGBuffer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceGBuffer");

	return Clss;
}


// NiagaraDataInterfaceGBuffer Niagara.Default__NiagaraDataInterfaceGBuffer
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceGBuffer* UNiagaraDataInterfaceGBuffer::GetDefaultObj()
{
	static class UNiagaraDataInterfaceGBuffer* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceGBuffer*>(UNiagaraDataInterfaceGBuffer::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfacePhysicsAsset
// (None)

class UClass* UNiagaraDataInterfacePhysicsAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfacePhysicsAsset");

	return Clss;
}


// NiagaraDataInterfacePhysicsAsset Niagara.Default__NiagaraDataInterfacePhysicsAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfacePhysicsAsset* UNiagaraDataInterfacePhysicsAsset::GetDefaultObj()
{
	static class UNiagaraDataInterfacePhysicsAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfacePhysicsAsset*>(UNiagaraDataInterfacePhysicsAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraPhysicsAssetDICollectorInterface
// (None)

class UClass* INiagaraPhysicsAssetDICollectorInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraPhysicsAssetDICollectorInterface");

	return Clss;
}


// NiagaraPhysicsAssetDICollectorInterface Niagara.Default__NiagaraPhysicsAssetDICollectorInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class INiagaraPhysicsAssetDICollectorInterface* INiagaraPhysicsAssetDICollectorInterface::GetDefaultObj()
{
	static class INiagaraPhysicsAssetDICollectorInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<INiagaraPhysicsAssetDICollectorInterface*>(INiagaraPhysicsAssetDICollectorInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceSimCacheReader
// (None)

class UClass* UNiagaraDataInterfaceSimCacheReader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceSimCacheReader");

	return Clss;
}


// NiagaraDataInterfaceSimCacheReader Niagara.Default__NiagaraDataInterfaceSimCacheReader
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceSimCacheReader* UNiagaraDataInterfaceSimCacheReader::GetDefaultObj()
{
	static class UNiagaraDataInterfaceSimCacheReader* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceSimCacheReader*>(UNiagaraDataInterfaceSimCacheReader::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceSimpleCounter
// (None)

class UClass* UNiagaraDataInterfaceSimpleCounter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceSimpleCounter");

	return Clss;
}


// NiagaraDataInterfaceSimpleCounter Niagara.Default__NiagaraDataInterfaceSimpleCounter
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceSimpleCounter* UNiagaraDataInterfaceSimpleCounter::GetDefaultObj()
{
	static class UNiagaraDataInterfaceSimpleCounter* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceSimpleCounter*>(UNiagaraDataInterfaceSimpleCounter::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceStaticMesh
// (None)

class UClass* UNiagaraDataInterfaceStaticMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceStaticMesh");

	return Clss;
}


// NiagaraDataInterfaceStaticMesh Niagara.Default__NiagaraDataInterfaceStaticMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceStaticMesh* UNiagaraDataInterfaceStaticMesh::GetDefaultObj()
{
	static class UNiagaraDataInterfaceStaticMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceStaticMesh*>(UNiagaraDataInterfaceStaticMesh::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraDataInterfaceStaticMesh.OnSourceEndPlay
// (Final, Native, Protected)
// Parameters:
// class AActor*                      InSource                                                         (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EEndPlayReason          Reason                                                           (Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

class AActor* UNiagaraDataInterfaceStaticMesh::OnSourceEndPlay(enum class EEndPlayReason* Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceStaticMesh", "OnSourceEndPlay");

	Params::UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Reason != nullptr)
		*Reason = Parms.Reason;

	return Parms.ReturnValue;

}


// Class Niagara.NiagaraDataInterfaceUObjectPropertyReader
// (None)

class UClass* UNiagaraDataInterfaceUObjectPropertyReader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceUObjectPropertyReader");

	return Clss;
}


// NiagaraDataInterfaceUObjectPropertyReader Niagara.Default__NiagaraDataInterfaceUObjectPropertyReader
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceUObjectPropertyReader* UNiagaraDataInterfaceUObjectPropertyReader::GetDefaultObj()
{
	static class UNiagaraDataInterfaceUObjectPropertyReader* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceUObjectPropertyReader*>(UNiagaraDataInterfaceUObjectPropertyReader::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraDataInterfaceUObjectPropertyReader.SetUObjectReaderPropertyRemap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraComponent                                                 (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class FName                        UserParameterName                                                (BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        GraphName                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FName                        RemapName                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class FName UNiagaraDataInterfaceUObjectPropertyReader::SetUObjectReaderPropertyRemap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceUObjectPropertyReader", "SetUObjectReaderPropertyRemap");

	Params::UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Niagara.NiagaraDataInterfaceVirtualTexture
// (None)

class UClass* UNiagaraDataInterfaceVirtualTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceVirtualTexture");

	return Clss;
}


// NiagaraDataInterfaceVirtualTexture Niagara.Default__NiagaraDataInterfaceVirtualTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceVirtualTexture* UNiagaraDataInterfaceVirtualTexture::GetDefaultObj()
{
	static class UNiagaraDataInterfaceVirtualTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceVirtualTexture*>(UNiagaraDataInterfaceVirtualTexture::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// (None)

class UClass* UMovieSceneNiagaraSystemSpawnSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneNiagaraSystemSpawnSection");

	return Clss;
}


// MovieSceneNiagaraSystemSpawnSection Niagara.Default__MovieSceneNiagaraSystemSpawnSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneNiagaraSystemSpawnSection* UMovieSceneNiagaraSystemSpawnSection::GetDefaultObj()
{
	static class UMovieSceneNiagaraSystemSpawnSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneNiagaraSystemSpawnSection*>(UMovieSceneNiagaraSystemSpawnSection::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.MovieSceneNiagaraTrack
// (None)

class UClass* UMovieSceneNiagaraTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneNiagaraTrack");

	return Clss;
}


// MovieSceneNiagaraTrack Niagara.Default__MovieSceneNiagaraTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneNiagaraTrack* UMovieSceneNiagaraTrack::GetDefaultObj()
{
	static class UMovieSceneNiagaraTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneNiagaraTrack*>(UMovieSceneNiagaraTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.MovieSceneNiagaraSystemTrack
// (None)

class UClass* UMovieSceneNiagaraSystemTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneNiagaraSystemTrack");

	return Clss;
}


// MovieSceneNiagaraSystemTrack Niagara.Default__MovieSceneNiagaraSystemTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneNiagaraSystemTrack* UMovieSceneNiagaraSystemTrack::GetDefaultObj()
{
	static class UMovieSceneNiagaraSystemTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneNiagaraSystemTrack*>(UMovieSceneNiagaraSystemTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.MovieSceneNiagaraParameterTrack
// (None)

class UClass* UMovieSceneNiagaraParameterTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneNiagaraParameterTrack");

	return Clss;
}


// MovieSceneNiagaraParameterTrack Niagara.Default__MovieSceneNiagaraParameterTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneNiagaraParameterTrack* UMovieSceneNiagaraParameterTrack::GetDefaultObj()
{
	static class UMovieSceneNiagaraParameterTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneNiagaraParameterTrack*>(UMovieSceneNiagaraParameterTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// (None)

class UClass* UMovieSceneNiagaraBoolParameterTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneNiagaraBoolParameterTrack");

	return Clss;
}


// MovieSceneNiagaraBoolParameterTrack Niagara.Default__MovieSceneNiagaraBoolParameterTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneNiagaraBoolParameterTrack* UMovieSceneNiagaraBoolParameterTrack::GetDefaultObj()
{
	static class UMovieSceneNiagaraBoolParameterTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneNiagaraBoolParameterTrack*>(UMovieSceneNiagaraBoolParameterTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.MovieSceneNiagaraColorParameterTrack
// (None)

class UClass* UMovieSceneNiagaraColorParameterTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneNiagaraColorParameterTrack");

	return Clss;
}


// MovieSceneNiagaraColorParameterTrack Niagara.Default__MovieSceneNiagaraColorParameterTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneNiagaraColorParameterTrack* UMovieSceneNiagaraColorParameterTrack::GetDefaultObj()
{
	static class UMovieSceneNiagaraColorParameterTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneNiagaraColorParameterTrack*>(UMovieSceneNiagaraColorParameterTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// (None)

class UClass* UMovieSceneNiagaraFloatParameterTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneNiagaraFloatParameterTrack");

	return Clss;
}


// MovieSceneNiagaraFloatParameterTrack Niagara.Default__MovieSceneNiagaraFloatParameterTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneNiagaraFloatParameterTrack* UMovieSceneNiagaraFloatParameterTrack::GetDefaultObj()
{
	static class UMovieSceneNiagaraFloatParameterTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneNiagaraFloatParameterTrack*>(UMovieSceneNiagaraFloatParameterTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// (None)

class UClass* UMovieSceneNiagaraIntegerParameterTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneNiagaraIntegerParameterTrack");

	return Clss;
}


// MovieSceneNiagaraIntegerParameterTrack Niagara.Default__MovieSceneNiagaraIntegerParameterTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneNiagaraIntegerParameterTrack* UMovieSceneNiagaraIntegerParameterTrack::GetDefaultObj()
{
	static class UMovieSceneNiagaraIntegerParameterTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneNiagaraIntegerParameterTrack*>(UMovieSceneNiagaraIntegerParameterTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// (None)

class UClass* UMovieSceneNiagaraVectorParameterTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneNiagaraVectorParameterTrack");

	return Clss;
}


// MovieSceneNiagaraVectorParameterTrack Niagara.Default__MovieSceneNiagaraVectorParameterTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneNiagaraVectorParameterTrack* UMovieSceneNiagaraVectorParameterTrack::GetDefaultObj()
{
	static class UMovieSceneNiagaraVectorParameterTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneNiagaraVectorParameterTrack*>(UMovieSceneNiagaraVectorParameterTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraActor
// (Actor)

class UClass* ANiagaraActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraActor");

	return Clss;
}


// NiagaraActor Niagara.Default__NiagaraActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ANiagaraActor* ANiagaraActor::GetDefaultObj()
{
	static class ANiagaraActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ANiagaraActor*>(ANiagaraActor::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraActor.SetDestroyOnSystemFinish
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldDestroyOnSystemFinish                                     (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool ANiagaraActor::SetDestroyOnSystemFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraActor", "SetDestroyOnSystemFinish");

	Params::ANiagaraActor_SetDestroyOnSystemFinish_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraActor.OnNiagaraSystemFinished
// (Final, Native, Private)
// Parameters:
// class UNiagaraComponent*           FinishedComponent                                                (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UNiagaraComponent* ANiagaraActor::OnNiagaraSystemFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraActor", "OnNiagaraSystemFinished");

	Params::ANiagaraActor_OnNiagaraSystemFinished_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Niagara.NiagaraBakerOutput
// (None)

class UClass* UNiagaraBakerOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraBakerOutput");

	return Clss;
}


// NiagaraBakerOutput Niagara.Default__NiagaraBakerOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraBakerOutput* UNiagaraBakerOutput::GetDefaultObj()
{
	static class UNiagaraBakerOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraBakerOutput*>(UNiagaraBakerOutput::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraBakerOutputSimCache
// (None)

class UClass* UNiagaraBakerOutputSimCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraBakerOutputSimCache");

	return Clss;
}


// NiagaraBakerOutputSimCache Niagara.Default__NiagaraBakerOutputSimCache
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraBakerOutputSimCache* UNiagaraBakerOutputSimCache::GetDefaultObj()
{
	static class UNiagaraBakerOutputSimCache* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraBakerOutputSimCache*>(UNiagaraBakerOutputSimCache::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraBakerOutputTexture2D
// (None)

class UClass* UNiagaraBakerOutputTexture2D::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraBakerOutputTexture2D");

	return Clss;
}


// NiagaraBakerOutputTexture2D Niagara.Default__NiagaraBakerOutputTexture2D
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraBakerOutputTexture2D* UNiagaraBakerOutputTexture2D::GetDefaultObj()
{
	static class UNiagaraBakerOutputTexture2D* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraBakerOutputTexture2D*>(UNiagaraBakerOutputTexture2D::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraBakerOutputVolumeTexture
// (None)

class UClass* UNiagaraBakerOutputVolumeTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraBakerOutputVolumeTexture");

	return Clss;
}


// NiagaraBakerOutputVolumeTexture Niagara.Default__NiagaraBakerOutputVolumeTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraBakerOutputVolumeTexture* UNiagaraBakerOutputVolumeTexture::GetDefaultObj()
{
	static class UNiagaraBakerOutputVolumeTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraBakerOutputVolumeTexture*>(UNiagaraBakerOutputVolumeTexture::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraBakerSettings
// (None)

class UClass* UNiagaraBakerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraBakerSettings");

	return Clss;
}


// NiagaraBakerSettings Niagara.Default__NiagaraBakerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraBakerSettings* UNiagaraBakerSettings::GetDefaultObj()
{
	static class UNiagaraBakerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraBakerSettings*>(UNiagaraBakerSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UNiagaraComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraComponent");

	return Clss;
}


// NiagaraComponent Niagara.Default__NiagaraComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraComponent* UNiagaraComponent::GetDefaultObj()
{
	static class UNiagaraComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraComponent*>(UNiagaraComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraComponent.SetVariableVec4
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector4                    InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FVector4 UNiagaraComponent::SetVariableVec4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableVec4");

	Params::UNiagaraComponent_SetVariableVec4_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetVariableVec3
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector                     InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FVector UNiagaraComponent::SetVariableVec3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableVec3");

	Params::UNiagaraComponent_SetVariableVec3_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetVariableVec2
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector2D                   InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FVector2D UNiagaraComponent::SetVariableVec2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableVec2");

	Params::UNiagaraComponent_SetVariableVec2_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UTextureRenderTarget*        TextureRenderTarget                                              (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)

class UTextureRenderTarget* UNiagaraComponent::SetVariableTextureRenderTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableTextureRenderTarget");

	Params::UNiagaraComponent_SetVariableTextureRenderTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetVariableTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UTexture*                    Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)

class UTexture* UNiagaraComponent::SetVariableTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableTexture");

	Params::UNiagaraComponent_SetVariableTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetVariableStaticMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UStaticMesh*                 InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

class UStaticMesh* UNiagaraComponent::SetVariableStaticMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableStaticMesh");

	Params::UNiagaraComponent_SetVariableStaticMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetVariableQuat
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FQuat                       InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FQuat UNiagaraComponent::SetVariableQuat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableQuat");

	Params::UNiagaraComponent_SetVariableQuat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetVariablePosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector                     InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FVector UNiagaraComponent::SetVariablePosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariablePosition");

	Params::UNiagaraComponent_SetVariablePosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetVariableObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UObject*                     Object                                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)

class FName UNiagaraComponent::SetVariableObject(class UObject** Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableObject");

	Params::UNiagaraComponent_SetVariableObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Object != nullptr)
		*Object = Parms.Object;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetVariableMatrix
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FMatrix                     InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FMatrix UNiagaraComponent::SetVariableMatrix()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableMatrix");

	Params::UNiagaraComponent_SetVariableMatrix_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetVariableMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UMaterialInterface*          Object                                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)

class FName UNiagaraComponent::SetVariableMaterial(class UMaterialInterface** Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableMaterial");

	Params::UNiagaraComponent_SetVariableMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Object != nullptr)
		*Object = Parms.Object;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetVariableLinearColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FLinearColor                InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FLinearColor UNiagaraComponent::SetVariableLinearColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableLinearColor");

	Params::UNiagaraComponent_SetVariableLinearColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetVariableInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int32                              InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

int32 UNiagaraComponent::SetVariableInt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableInt");

	Params::UNiagaraComponent_SetVariableInt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetVariableFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// float                              InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float UNiagaraComponent::SetVariableFloat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableFloat");

	Params::UNiagaraComponent_SetVariableFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetVariableBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

bool UNiagaraComponent::SetVariableBool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableBool");

	Params::UNiagaraComponent_SetVariableBool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetVariableActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class AActor*                      Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)

class FName UNiagaraComponent::SetVariableActor(class AActor** Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableActor");

	Params::UNiagaraComponent_SetVariableActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetTickBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ENiagaraTickBehavior    NewTickBehavior                                                  (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class ENiagaraTickBehavior UNiagaraComponent::SetTickBehavior()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetTickBehavior");

	Params::UNiagaraComponent_SetTickBehavior_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetSystemFixedBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                        LocalBounds                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UNiagaraComponent::SetSystemFixedBounds(struct FBox* LocalBounds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetSystemFixedBounds");

	Params::UNiagaraComponent_SetSystemFixedBounds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LocalBounds != nullptr)
		*LocalBounds = std::move(Parms.LocalBounds);

}


// Function Niagara.NiagaraComponent.SetSimCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraSimCache*            SimCache                                                         (Edit, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bResetSystem                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UNiagaraComponent::SetSimCache(class UNiagaraSimCache* SimCache)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetSimCache");

	Params::UNiagaraComponent_SetSimCache_Params Parms{};

	Parms.SimCache = SimCache;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetSeekDelta
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSeekDelta                                                      (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UNiagaraComponent::SetSeekDelta()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetSeekDelta");

	Params::UNiagaraComponent_SetSeekDelta_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetRenderingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInRenderingEnabled                                              (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UNiagaraComponent::SetRenderingEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetRenderingEnabled");

	Params::UNiagaraComponent_SetRenderingEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetRandomSeedOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewRandomSeedOffset                                              (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UNiagaraComponent::SetRandomSeedOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetRandomSeedOffset");

	Params::UNiagaraComponent_SetRandomSeedOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetPreviewLODDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnablePreviewLODDistance                                        (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              PreviewLODDistance                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              PreviewMaxDistance                                               (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UNiagaraComponent::SetPreviewLODDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetPreviewLODDistance");

	Params::UNiagaraComponent_SetPreviewLODDistance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInPaused                                                        (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UNiagaraComponent::SetPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetPaused");

	Params::UNiagaraComponent_SetPaused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector4                    InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FVector4 UNiagaraComponent::SetNiagaraVariableVec4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableVec4");

	Params::UNiagaraComponent_SetNiagaraVariableVec4_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector                     InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FVector UNiagaraComponent::SetNiagaraVariableVec3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableVec3");

	Params::UNiagaraComponent_SetNiagaraVariableVec3_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector2D                   InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FVector2D UNiagaraComponent::SetNiagaraVariableVec2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableVec2");

	Params::UNiagaraComponent_SetNiagaraVariableVec2_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FQuat                       InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FQuat UNiagaraComponent::SetNiagaraVariableQuat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableQuat");

	Params::UNiagaraComponent_SetNiagaraVariableQuat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariablePosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector                     InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FVector UNiagaraComponent::SetNiagaraVariablePosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariablePosition");

	Params::UNiagaraComponent_SetNiagaraVariablePosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UObject*                     Object                                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)

class FString UNiagaraComponent::SetNiagaraVariableObject(class UObject** Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableObject");

	Params::UNiagaraComponent_SetNiagaraVariableObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Object != nullptr)
		*Object = Parms.Object;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableMatrix
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FMatrix                     InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FMatrix UNiagaraComponent::SetNiagaraVariableMatrix()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableMatrix");

	Params::UNiagaraComponent_SetNiagaraVariableMatrix_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FLinearColor                InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FLinearColor UNiagaraComponent::SetNiagaraVariableLinearColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableLinearColor");

	Params::UNiagaraComponent_SetNiagaraVariableLinearColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int32                              InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

int32 UNiagaraComponent::SetNiagaraVariableInt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableInt");

	Params::UNiagaraComponent_SetNiagaraVariableInt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// float                              InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float UNiagaraComponent::SetNiagaraVariableFloat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableFloat");

	Params::UNiagaraComponent_SetNiagaraVariableFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

bool UNiagaraComponent::SetNiagaraVariableBool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableBool");

	Params::UNiagaraComponent_SetNiagaraVariableBool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class AActor*                      Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)

class FString UNiagaraComponent::SetNiagaraVariableActor(class AActor** Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableActor");

	Params::UNiagaraComponent_SetNiagaraVariableActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetMaxSimTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMaxTime                                                        (Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UNiagaraComponent::SetMaxSimTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetMaxSimTime");

	Params::UNiagaraComponent_SetMaxSimTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bLock                                                            (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UNiagaraComponent::SetLockDesiredAgeDeltaTimeToSeekDelta()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetLockDesiredAgeDeltaTimeToSeekDelta");

	Params::UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetGpuComputeDebug
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnableDebug                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UNiagaraComponent::SetGpuComputeDebug()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetGpuComputeDebug");

	Params::UNiagaraComponent_SetGpuComputeDebug_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetForceSolo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInForceSolo                                                     (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UNiagaraComponent::SetForceSolo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetForceSolo");

	Params::UNiagaraComponent_SetForceSolo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetForceLocalPlayerEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsPlayerEffect                                                  (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UNiagaraComponent::SetForceLocalPlayerEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetForceLocalPlayerEffect");

	Params::UNiagaraComponent_SetForceLocalPlayerEffect_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetEmitterFixedBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        EmitterName                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FBox                        LocalBounds                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UNiagaraComponent::SetEmitterFixedBounds(class FName EmitterName, struct FBox* LocalBounds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetEmitterFixedBounds");

	Params::UNiagaraComponent_SetEmitterFixedBounds_Params Parms{};

	Parms.EmitterName = EmitterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LocalBounds != nullptr)
		*LocalBounds = std::move(Parms.LocalBounds);

}


// Function Niagara.NiagaraComponent.SetDesiredAge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDesiredAge                                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UNiagaraComponent::SetDesiredAge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetDesiredAge");

	Params::UNiagaraComponent_SetDesiredAge_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetCustomTimeDilation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Dilation                                                         (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UNiagaraComponent::SetCustomTimeDilation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetCustomTimeDilation");

	Params::UNiagaraComponent_SetCustomTimeDilation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInCanRenderWhileSeeking                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UNiagaraComponent::SetCanRenderWhileSeeking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetCanRenderWhileSeeking");

	Params::UNiagaraComponent_SetCanRenderWhileSeeking_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetAutoDestroy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAutoDestroy                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UNiagaraComponent::SetAutoDestroy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetAutoDestroy");

	Params::UNiagaraComponent_SetAutoDestroy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraSystem*              InAsset                                                          (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bResetExistingOverrideParameters                                 (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UNiagaraComponent::SetAsset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetAsset");

	Params::UNiagaraComponent_SetAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetAllowScalability
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAllow                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UNiagaraComponent::SetAllowScalability()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetAllowScalability");

	Params::UNiagaraComponent_SetAllowScalability_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SetAgeUpdateMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ENiagaraAgeUpdateMode   InAgeUpdateMode                                                  (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class ENiagaraAgeUpdateMode UNiagaraComponent::SetAgeUpdateMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetAgeUpdateMode");

	Params::UNiagaraComponent_SetAgeUpdateMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.SeekToDesiredAge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDesiredAge                                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UNiagaraComponent::SeekToDesiredAge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SeekToDesiredAge");

	Params::UNiagaraComponent_SeekToDesiredAge_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.ResetSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UNiagaraComponent::ResetSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "ResetSystem");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.ReinitializeSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UNiagaraComponent::ReinitializeSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "ReinitializeSystem");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNiagaraComponent::IsPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "IsPaused");

	Params::UNiagaraComponent_IsPaused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.InitForPerformanceBaseline
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UNiagaraComponent::InitForPerformanceBaseline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "InitForPerformanceBaseline");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.GetTickBehavior
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ENiagaraTickBehavior    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ENiagaraTickBehavior UNiagaraComponent::GetTickBehavior()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetTickBehavior");

	Params::UNiagaraComponent_GetTickBehavior_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetSystemFixedBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBox UNiagaraComponent::GetSystemFixedBounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetSystemFixedBounds");

	Params::UNiagaraComponent_GetSystemFixedBounds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetSimCache
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UNiagaraSimCache*            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UNiagaraSimCache* UNiagaraComponent::GetSimCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetSimCache");

	Params::UNiagaraComponent_GetSimCache_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetSeekDelta
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UNiagaraComponent::GetSeekDelta()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetSeekDelta");

	Params::UNiagaraComponent_GetSeekDelta_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetRandomSeedOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UNiagaraComponent::GetRandomSeedOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetRandomSeedOffset");

	Params::UNiagaraComponent_GetRandomSeedOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNiagaraComponent::GetPreviewLODDistanceEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetPreviewLODDistanceEnabled");

	Params::UNiagaraComponent_GetPreviewLODDistanceEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetPreviewLODDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UNiagaraComponent::GetPreviewLODDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetPreviewLODDistance");

	Params::UNiagaraComponent_GetPreviewLODDistance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InEmitterName                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      InValueName                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FVector>             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FVector> UNiagaraComponent::GetNiagaraParticleValueVec3_DebugOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetNiagaraParticleValueVec3_DebugOnly");

	Params::UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InEmitterName                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      InValueName                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<float>                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<float> UNiagaraComponent::GetNiagaraParticleValues_DebugOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetNiagaraParticleValues_DebugOnly");

	Params::UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InEmitterName                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FVector>             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FVector> UNiagaraComponent::GetNiagaraParticlePositions_DebugOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetNiagaraParticlePositions_DebugOnly");

	Params::UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetMaxSimTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UNiagaraComponent::GetMaxSimTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetMaxSimTime");

	Params::UNiagaraComponent_GetMaxSimTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNiagaraComponent::GetLockDesiredAgeDeltaTimeToSeekDelta()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetLockDesiredAgeDeltaTimeToSeekDelta");

	Params::UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetForceSolo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNiagaraComponent::GetForceSolo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetForceSolo");

	Params::UNiagaraComponent_GetForceSolo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetForceLocalPlayerEffect
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNiagaraComponent::GetForceLocalPlayerEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetForceLocalPlayerEffect");

	Params::UNiagaraComponent_GetForceLocalPlayerEffect_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetEmitterFixedBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        EmitterName                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FBox                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBox UNiagaraComponent::GetEmitterFixedBounds(class FName EmitterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetEmitterFixedBounds");

	Params::UNiagaraComponent_GetEmitterFixedBounds_Params Parms{};

	Parms.EmitterName = EmitterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetDesiredAge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UNiagaraComponent::GetDesiredAge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetDesiredAge");

	Params::UNiagaraComponent_GetDesiredAge_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetDataInterface
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// class UNiagaraDataInterface*       ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UNiagaraDataInterface* UNiagaraComponent::GetDataInterface(class FString* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetDataInterface");

	Params::UNiagaraComponent_GetDataInterface_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetCustomTimeDilation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UNiagaraComponent::GetCustomTimeDilation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetCustomTimeDilation");

	Params::UNiagaraComponent_GetCustomTimeDilation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UNiagaraSystem*              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UNiagaraSystem* UNiagaraComponent::GetAsset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetAsset");

	Params::UNiagaraComponent_GetAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetAllowScalability
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNiagaraComponent::GetAllowScalability()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetAllowScalability");

	Params::UNiagaraComponent_GetAllowScalability_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetAgeUpdateMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ENiagaraAgeUpdateMode   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ENiagaraAgeUpdateMode UNiagaraComponent::GetAgeUpdateMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetAgeUpdateMode");

	Params::UNiagaraComponent_GetAgeUpdateMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.ClearSystemFixedBounds
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UNiagaraComponent::ClearSystemFixedBounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "ClearSystemFixedBounds");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.ClearSimCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bResetSystem                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UNiagaraComponent::ClearSimCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "ClearSimCache");

	Params::UNiagaraComponent_ClearSimCache_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.ClearEmitterFixedBounds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        EmitterName                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UNiagaraComponent::ClearEmitterFixedBounds(class FName EmitterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "ClearEmitterFixedBounds");

	Params::UNiagaraComponent_ClearEmitterFixedBounds_Params Parms{};

	Parms.EmitterName = EmitterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.AdvanceSimulationByTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SimulateTime                                                     (ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              TickDeltaSeconds                                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UNiagaraComponent::AdvanceSimulationByTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "AdvanceSimulationByTime");

	Params::UNiagaraComponent_AdvanceSimulationByTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.AdvanceSimulation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TickCount                                                        (ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              TickDeltaSeconds                                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UNiagaraComponent::AdvanceSimulation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "AdvanceSimulation");

	Params::UNiagaraComponent_AdvanceSimulation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Niagara.NiagaraComponentPool
// (None)

class UClass* UNiagaraComponentPool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraComponentPool");

	return Clss;
}


// NiagaraComponentPool Niagara.Default__NiagaraComponentPool
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraComponentPool* UNiagaraComponentPool::GetDefaultObj()
{
	static class UNiagaraComponentPool* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraComponentPool*>(UNiagaraComponentPool::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraRendererProperties
// (None)

class UClass* UNiagaraRendererProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraRendererProperties");

	return Clss;
}


// NiagaraRendererProperties Niagara.Default__NiagaraRendererProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraRendererProperties* UNiagaraRendererProperties::GetDefaultObj()
{
	static class UNiagaraRendererProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraRendererProperties*>(UNiagaraRendererProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraComponentRendererProperties
// (None)

class UClass* UNiagaraComponentRendererProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraComponentRendererProperties");

	return Clss;
}


// NiagaraComponentRendererProperties Niagara.Default__NiagaraComponentRendererProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraComponentRendererProperties* UNiagaraComponentRendererProperties::GetDefaultObj()
{
	static class UNiagaraComponentRendererProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraComponentRendererProperties*>(UNiagaraComponentRendererProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraCullProxyComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UNiagaraCullProxyComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraCullProxyComponent");

	return Clss;
}


// NiagaraCullProxyComponent Niagara.Default__NiagaraCullProxyComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraCullProxyComponent* UNiagaraCullProxyComponent::GetDefaultObj()
{
	static class UNiagaraCullProxyComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraCullProxyComponent*>(UNiagaraCullProxyComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataChannelLibrary
// (None)

class UClass* UNiagaraDataChannelLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataChannelLibrary");

	return Clss;
}


// NiagaraDataChannelLibrary Niagara.Default__NiagaraDataChannelLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataChannelLibrary* UNiagaraDataChannelLibrary::GetDefaultObj()
{
	static class UNiagaraDataChannelLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataChannelLibrary*>(UNiagaraDataChannelLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraDataChannelLibrary.GetNiagaraDataChannel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        Channel                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
// class UNiagaraDataChannelHandler*  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UNiagaraDataChannelHandler* UNiagaraDataChannelLibrary::GetNiagaraDataChannel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataChannelLibrary", "GetNiagaraDataChannel");

	Params::UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Niagara.NiagaraDataInterface2DArrayTexture
// (None)

class UClass* UNiagaraDataInterface2DArrayTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterface2DArrayTexture");

	return Clss;
}


// NiagaraDataInterface2DArrayTexture Niagara.Default__NiagaraDataInterface2DArrayTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterface2DArrayTexture* UNiagaraDataInterface2DArrayTexture::GetDefaultObj()
{
	static class UNiagaraDataInterface2DArrayTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterface2DArrayTexture*>(UNiagaraDataInterface2DArrayTexture::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceRWBase
// (None)

class UClass* UNiagaraDataInterfaceRWBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceRWBase");

	return Clss;
}


// NiagaraDataInterfaceRWBase Niagara.Default__NiagaraDataInterfaceRWBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceRWBase* UNiagaraDataInterfaceRWBase::GetDefaultObj()
{
	static class UNiagaraDataInterfaceRWBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceRWBase*>(UNiagaraDataInterfaceRWBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceArray
// (None)

class UClass* UNiagaraDataInterfaceArray::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceArray");

	return Clss;
}


// NiagaraDataInterfaceArray Niagara.Default__NiagaraDataInterfaceArray
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceArray* UNiagaraDataInterfaceArray::GetDefaultObj()
{
	static class UNiagaraDataInterfaceArray* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceArray*>(UNiagaraDataInterfaceArray::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceArrayFloat
// (None)

class UClass* UNiagaraDataInterfaceArrayFloat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayFloat");

	return Clss;
}


// NiagaraDataInterfaceArrayFloat Niagara.Default__NiagaraDataInterfaceArrayFloat
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceArrayFloat* UNiagaraDataInterfaceArrayFloat::GetDefaultObj()
{
	static class UNiagaraDataInterfaceArrayFloat* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceArrayFloat*>(UNiagaraDataInterfaceArrayFloat::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceArrayFloat2
// (None)

class UClass* UNiagaraDataInterfaceArrayFloat2::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayFloat2");

	return Clss;
}


// NiagaraDataInterfaceArrayFloat2 Niagara.Default__NiagaraDataInterfaceArrayFloat2
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceArrayFloat2* UNiagaraDataInterfaceArrayFloat2::GetDefaultObj()
{
	static class UNiagaraDataInterfaceArrayFloat2* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceArrayFloat2*>(UNiagaraDataInterfaceArrayFloat2::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceArrayFloat3
// (None)

class UClass* UNiagaraDataInterfaceArrayFloat3::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayFloat3");

	return Clss;
}


// NiagaraDataInterfaceArrayFloat3 Niagara.Default__NiagaraDataInterfaceArrayFloat3
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceArrayFloat3* UNiagaraDataInterfaceArrayFloat3::GetDefaultObj()
{
	static class UNiagaraDataInterfaceArrayFloat3* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceArrayFloat3*>(UNiagaraDataInterfaceArrayFloat3::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceArrayPosition
// (None)

class UClass* UNiagaraDataInterfaceArrayPosition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayPosition");

	return Clss;
}


// NiagaraDataInterfaceArrayPosition Niagara.Default__NiagaraDataInterfaceArrayPosition
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceArrayPosition* UNiagaraDataInterfaceArrayPosition::GetDefaultObj()
{
	static class UNiagaraDataInterfaceArrayPosition* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceArrayPosition*>(UNiagaraDataInterfaceArrayPosition::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceArrayFloat4
// (None)

class UClass* UNiagaraDataInterfaceArrayFloat4::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayFloat4");

	return Clss;
}


// NiagaraDataInterfaceArrayFloat4 Niagara.Default__NiagaraDataInterfaceArrayFloat4
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceArrayFloat4* UNiagaraDataInterfaceArrayFloat4::GetDefaultObj()
{
	static class UNiagaraDataInterfaceArrayFloat4* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceArrayFloat4*>(UNiagaraDataInterfaceArrayFloat4::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceArrayColor
// (None)

class UClass* UNiagaraDataInterfaceArrayColor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayColor");

	return Clss;
}


// NiagaraDataInterfaceArrayColor Niagara.Default__NiagaraDataInterfaceArrayColor
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceArrayColor* UNiagaraDataInterfaceArrayColor::GetDefaultObj()
{
	static class UNiagaraDataInterfaceArrayColor* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceArrayColor*>(UNiagaraDataInterfaceArrayColor::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceArrayQuat
// (None)

class UClass* UNiagaraDataInterfaceArrayQuat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayQuat");

	return Clss;
}


// NiagaraDataInterfaceArrayQuat Niagara.Default__NiagaraDataInterfaceArrayQuat
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceArrayQuat* UNiagaraDataInterfaceArrayQuat::GetDefaultObj()
{
	static class UNiagaraDataInterfaceArrayQuat* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceArrayQuat*>(UNiagaraDataInterfaceArrayQuat::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary
// (None)

class UClass* UNiagaraDataInterfaceArrayFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayFunctionLibrary");

	return Clss;
}


// NiagaraDataInterfaceArrayFunctionLibrary Niagara.Default__NiagaraDataInterfaceArrayFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceArrayFunctionLibrary* UNiagaraDataInterfaceArrayFunctionLibrary::GetDefaultObj()
{
	static class UNiagaraDataInterfaceArrayFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceArrayFunctionLibrary*>(UNiagaraDataInterfaceArrayFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FVector                     Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// bool                               bSizeToFit                                                       (Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, const struct FVector& Value, bool* bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayVectorValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSizeToFit != nullptr)
		*bSizeToFit = Parms.bSizeToFit;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FVector4                    Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// bool                               bSizeToFit                                                       (Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, const struct FVector4& Value, bool* bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayVector4Value");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSizeToFit != nullptr)
		*bSizeToFit = Parms.bSizeToFit;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector4>            ArrayData                                                        (Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FName UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, TArray<struct FVector4>* ArrayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayVector4");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ArrayData != nullptr)
		*ArrayData = std::move(Parms.ArrayData);

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FVector2D                   Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// bool                               bSizeToFit                                                       (Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, const struct FVector2D& Value, bool* bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayVector2DValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSizeToFit != nullptr)
		*bSizeToFit = Parms.bSizeToFit;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           ArrayData                                                        (Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FName UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, TArray<struct FVector2D>* ArrayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayVector2D");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ArrayData != nullptr)
		*ArrayData = std::move(Parms.ArrayData);

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector>             ArrayData                                                        (Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FName UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, TArray<struct FVector>* ArrayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayVector");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ArrayData != nullptr)
		*ArrayData = std::move(Parms.ArrayData);

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8Value
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// int32                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// bool                               bSizeToFit                                                       (Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, int32 Value, bool* bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayUInt8Value");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSizeToFit != nullptr)
		*bSizeToFit = Parms.bSizeToFit;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<int32>                      ArrayData                                                        (Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FName UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, TArray<int32>* ArrayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayUInt8");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ArrayData != nullptr)
		*ArrayData = std::move(Parms.ArrayData);

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FQuat                       Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// bool                               bSizeToFit                                                       (Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, const struct FQuat& Value, bool* bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayQuatValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSizeToFit != nullptr)
		*bSizeToFit = Parms.bSizeToFit;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FQuat>               ArrayData                                                        (Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FName UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, TArray<struct FQuat>* ArrayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayQuat");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ArrayData != nullptr)
		*ArrayData = std::move(Parms.ArrayData);

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPositionValue
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FVector                     Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// bool                               bSizeToFit                                                       (Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, const struct FVector& Value, bool* bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayPositionValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSizeToFit != nullptr)
		*bSizeToFit = Parms.bSizeToFit;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector>             ArrayData                                                        (Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FName UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, TArray<struct FVector>* ArrayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayPosition");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ArrayData != nullptr)
		*ArrayData = std::move(Parms.ArrayData);

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// int32                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// bool                               bSizeToFit                                                       (Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, int32 Value, bool* bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayInt32Value");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSizeToFit != nullptr)
		*bSizeToFit = Parms.bSizeToFit;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<int32>                      ArrayData                                                        (Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FName UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, TArray<int32>* ArrayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayInt32");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ArrayData != nullptr)
		*ArrayData = std::move(Parms.ArrayData);

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// bool                               bSizeToFit                                                       (Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, float Value, bool* bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayFloatValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSizeToFit != nullptr)
		*bSizeToFit = Parms.bSizeToFit;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<float>                      ArrayData                                                        (Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FName UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, TArray<float>* ArrayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayFloat");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ArrayData != nullptr)
		*ArrayData = std::move(Parms.ArrayData);

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FLinearColor                Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// bool                               bSizeToFit                                                       (Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, const struct FLinearColor& Value, bool* bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayColorValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSizeToFit != nullptr)
		*bSizeToFit = Parms.bSizeToFit;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FLinearColor>        ArrayData                                                        (Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FName UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, TArray<struct FLinearColor>* ArrayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayColor");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ArrayData != nullptr)
		*ArrayData = std::move(Parms.ArrayData);

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// bool                               bSizeToFit                                                       (Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, bool Value, bool* bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayBoolValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSizeToFit != nullptr)
		*bSizeToFit = Parms.bSizeToFit;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<bool>                       ArrayData                                                        (Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FName UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, TArray<bool>* ArrayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayBool");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ArrayData != nullptr)
		*ArrayData = std::move(Parms.ArrayData);

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayVectorValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FVector4                    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector4 UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayVector4Value");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector4>            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FVector4> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayVector4");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayVector2DValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector2D>           ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FVector2D> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayVector2D");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector>             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FVector> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayVector");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8Value
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayUInt8Value");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<int32>                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<int32> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayUInt8");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FQuat                       ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FQuat UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayQuatValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FQuat>               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FQuat> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayQuat");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPositionValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayPositionValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FVector>             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FVector> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayPosition");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayInt32Value");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<int32>                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<int32> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayInt32");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayFloatValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<float>                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<float> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayFloat");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FLinearColor                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FLinearColor UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayColorValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FLinearColor>        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FLinearColor> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayColor");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayBoolValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<bool>                       ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<bool> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayBool");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Niagara.NiagaraDataInterfaceArrayInt32
// (None)

class UClass* UNiagaraDataInterfaceArrayInt32::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayInt32");

	return Clss;
}


// NiagaraDataInterfaceArrayInt32 Niagara.Default__NiagaraDataInterfaceArrayInt32
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceArrayInt32* UNiagaraDataInterfaceArrayInt32::GetDefaultObj()
{
	static class UNiagaraDataInterfaceArrayInt32* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceArrayInt32*>(UNiagaraDataInterfaceArrayInt32::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceArrayUInt8
// (None)

class UClass* UNiagaraDataInterfaceArrayUInt8::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayUInt8");

	return Clss;
}


// NiagaraDataInterfaceArrayUInt8 Niagara.Default__NiagaraDataInterfaceArrayUInt8
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceArrayUInt8* UNiagaraDataInterfaceArrayUInt8::GetDefaultObj()
{
	static class UNiagaraDataInterfaceArrayUInt8* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceArrayUInt8*>(UNiagaraDataInterfaceArrayUInt8::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceArrayBool
// (None)

class UClass* UNiagaraDataInterfaceArrayBool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayBool");

	return Clss;
}


// NiagaraDataInterfaceArrayBool Niagara.Default__NiagaraDataInterfaceArrayBool
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceArrayBool* UNiagaraDataInterfaceArrayBool::GetDefaultObj()
{
	static class UNiagaraDataInterfaceArrayBool* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceArrayBool*>(UNiagaraDataInterfaceArrayBool::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceArrayNiagaraID
// (None)

class UClass* UNiagaraDataInterfaceArrayNiagaraID::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayNiagaraID");

	return Clss;
}


// NiagaraDataInterfaceArrayNiagaraID Niagara.Default__NiagaraDataInterfaceArrayNiagaraID
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceArrayNiagaraID* UNiagaraDataInterfaceArrayNiagaraID::GetDefaultObj()
{
	static class UNiagaraDataInterfaceArrayNiagaraID* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceArrayNiagaraID*>(UNiagaraDataInterfaceArrayNiagaraID::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceAudioSubmix
// (None)

class UClass* UNiagaraDataInterfaceAudioSubmix::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceAudioSubmix");

	return Clss;
}


// NiagaraDataInterfaceAudioSubmix Niagara.Default__NiagaraDataInterfaceAudioSubmix
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceAudioSubmix* UNiagaraDataInterfaceAudioSubmix::GetDefaultObj()
{
	static class UNiagaraDataInterfaceAudioSubmix* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceAudioSubmix*>(UNiagaraDataInterfaceAudioSubmix::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
// (None)

class UClass* UNiagaraDataInterfaceAudioOscilloscope::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceAudioOscilloscope");

	return Clss;
}


// NiagaraDataInterfaceAudioOscilloscope Niagara.Default__NiagaraDataInterfaceAudioOscilloscope
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceAudioOscilloscope* UNiagaraDataInterfaceAudioOscilloscope::GetDefaultObj()
{
	static class UNiagaraDataInterfaceAudioOscilloscope* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceAudioOscilloscope*>(UNiagaraDataInterfaceAudioOscilloscope::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceAudioPlayerSettings
// (None)

class UClass* UNiagaraDataInterfaceAudioPlayerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceAudioPlayerSettings");

	return Clss;
}


// NiagaraDataInterfaceAudioPlayerSettings Niagara.Default__NiagaraDataInterfaceAudioPlayerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceAudioPlayerSettings* UNiagaraDataInterfaceAudioPlayerSettings::GetDefaultObj()
{
	static class UNiagaraDataInterfaceAudioPlayerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceAudioPlayerSettings*>(UNiagaraDataInterfaceAudioPlayerSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceAudioPlayer
// (None)

class UClass* UNiagaraDataInterfaceAudioPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceAudioPlayer");

	return Clss;
}


// NiagaraDataInterfaceAudioPlayer Niagara.Default__NiagaraDataInterfaceAudioPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceAudioPlayer* UNiagaraDataInterfaceAudioPlayer::GetDefaultObj()
{
	static class UNiagaraDataInterfaceAudioPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceAudioPlayer*>(UNiagaraDataInterfaceAudioPlayer::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceAudioSpectrum
// (None)

class UClass* UNiagaraDataInterfaceAudioSpectrum::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceAudioSpectrum");

	return Clss;
}


// NiagaraDataInterfaceAudioSpectrum Niagara.Default__NiagaraDataInterfaceAudioSpectrum
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceAudioSpectrum* UNiagaraDataInterfaceAudioSpectrum::GetDefaultObj()
{
	static class UNiagaraDataInterfaceAudioSpectrum* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceAudioSpectrum*>(UNiagaraDataInterfaceAudioSpectrum::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceCamera
// (None)

class UClass* UNiagaraDataInterfaceCamera::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceCamera");

	return Clss;
}


// NiagaraDataInterfaceCamera Niagara.Default__NiagaraDataInterfaceCamera
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceCamera* UNiagaraDataInterfaceCamera::GetDefaultObj()
{
	static class UNiagaraDataInterfaceCamera* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceCamera*>(UNiagaraDataInterfaceCamera::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceCollisionQuery
// (None)

class UClass* UNiagaraDataInterfaceCollisionQuery::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceCollisionQuery");

	return Clss;
}


// NiagaraDataInterfaceCollisionQuery Niagara.Default__NiagaraDataInterfaceCollisionQuery
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceCollisionQuery* UNiagaraDataInterfaceCollisionQuery::GetDefaultObj()
{
	static class UNiagaraDataInterfaceCollisionQuery* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceCollisionQuery*>(UNiagaraDataInterfaceCollisionQuery::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceCurveBase
// (None)

class UClass* UNiagaraDataInterfaceCurveBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceCurveBase");

	return Clss;
}


// NiagaraDataInterfaceCurveBase Niagara.Default__NiagaraDataInterfaceCurveBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceCurveBase* UNiagaraDataInterfaceCurveBase::GetDefaultObj()
{
	static class UNiagaraDataInterfaceCurveBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceCurveBase*>(UNiagaraDataInterfaceCurveBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceColorCurve
// (None)

class UClass* UNiagaraDataInterfaceColorCurve::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceColorCurve");

	return Clss;
}


// NiagaraDataInterfaceColorCurve Niagara.Default__NiagaraDataInterfaceColorCurve
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceColorCurve* UNiagaraDataInterfaceColorCurve::GetDefaultObj()
{
	static class UNiagaraDataInterfaceColorCurve* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceColorCurve*>(UNiagaraDataInterfaceColorCurve::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceCubeTexture
// (None)

class UClass* UNiagaraDataInterfaceCubeTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceCubeTexture");

	return Clss;
}


// NiagaraDataInterfaceCubeTexture Niagara.Default__NiagaraDataInterfaceCubeTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceCubeTexture* UNiagaraDataInterfaceCubeTexture::GetDefaultObj()
{
	static class UNiagaraDataInterfaceCubeTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceCubeTexture*>(UNiagaraDataInterfaceCubeTexture::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceCurlNoise
// (None)

class UClass* UNiagaraDataInterfaceCurlNoise::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceCurlNoise");

	return Clss;
}


// NiagaraDataInterfaceCurlNoise Niagara.Default__NiagaraDataInterfaceCurlNoise
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceCurlNoise* UNiagaraDataInterfaceCurlNoise::GetDefaultObj()
{
	static class UNiagaraDataInterfaceCurlNoise* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceCurlNoise*>(UNiagaraDataInterfaceCurlNoise::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceCurve
// (None)

class UClass* UNiagaraDataInterfaceCurve::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceCurve");

	return Clss;
}


// NiagaraDataInterfaceCurve Niagara.Default__NiagaraDataInterfaceCurve
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceCurve* UNiagaraDataInterfaceCurve::GetDefaultObj()
{
	static class UNiagaraDataInterfaceCurve* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceCurve*>(UNiagaraDataInterfaceCurve::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraParticleCallbackHandler
// (None)

class UClass* INiagaraParticleCallbackHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraParticleCallbackHandler");

	return Clss;
}


// NiagaraParticleCallbackHandler Niagara.Default__NiagaraParticleCallbackHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class INiagaraParticleCallbackHandler* INiagaraParticleCallbackHandler::GetDefaultObj()
{
	static class INiagaraParticleCallbackHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<INiagaraParticleCallbackHandler*>(INiagaraParticleCallbackHandler::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBasicParticleData>  Data                                                             (ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UNiagaraSystem*              NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// struct FVector                     SimulationPositionOffset                                         (Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void INiagaraParticleCallbackHandler::ReceiveParticleData(const TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const struct FVector& SimulationPositionOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParticleCallbackHandler", "ReceiveParticleData");

	Params::INiagaraParticleCallbackHandler_ReceiveParticleData_Params Parms{};

	Parms.Data = Data;
	Parms.NiagaraSystem = NiagaraSystem;
	Parms.SimulationPositionOffset = SimulationPositionOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Niagara.NiagaraDataInterfaceExport
// (None)

class UClass* UNiagaraDataInterfaceExport::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceExport");

	return Clss;
}


// NiagaraDataInterfaceExport Niagara.Default__NiagaraDataInterfaceExport
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceExport* UNiagaraDataInterfaceExport::GetDefaultObj()
{
	static class UNiagaraDataInterfaceExport* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceExport*>(UNiagaraDataInterfaceExport::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceGrid2D
// (None)

class UClass* UNiagaraDataInterfaceGrid2D::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceGrid2D");

	return Clss;
}


// NiagaraDataInterfaceGrid2D Niagara.Default__NiagaraDataInterfaceGrid2D
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceGrid2D* UNiagaraDataInterfaceGrid2D::GetDefaultObj()
{
	static class UNiagaraDataInterfaceGrid2D* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceGrid2D*>(UNiagaraDataInterfaceGrid2D::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceGrid2DCollection
// (None)

class UClass* UNiagaraDataInterfaceGrid2DCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceGrid2DCollection");

	return Clss;
}


// NiagaraDataInterfaceGrid2DCollection Niagara.Default__NiagaraDataInterfaceGrid2DCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceGrid2DCollection* UNiagaraDataInterfaceGrid2DCollection::GetDefaultObj()
{
	static class UNiagaraDataInterfaceGrid2DCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceGrid2DCollection*>(UNiagaraDataInterfaceGrid2DCollection::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           Component                                                        (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              SizeX                                                            (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference)
// int32                              SizeY                                                            (Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

class UNiagaraComponent* UNiagaraDataInterfaceGrid2DCollection::GetTextureSize(int32* SizeX, int32* SizeY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid2DCollection", "GetTextureSize");

	Params::UNiagaraDataInterfaceGrid2DCollection_GetTextureSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SizeX != nullptr)
		*SizeX = Parms.SizeX;

	if (SizeY != nullptr)
		*SizeY = Parms.SizeY;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           Component                                                        (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              SizeX                                                            (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference)
// int32                              SizeY                                                            (Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

class UNiagaraComponent* UNiagaraDataInterfaceGrid2DCollection::GetRawTextureSize(int32* SizeX, int32* SizeY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid2DCollection", "GetRawTextureSize");

	Params::UNiagaraDataInterfaceGrid2DCollection_GetRawTextureSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SizeX != nullptr)
		*SizeX = Parms.SizeX;

	if (SizeY != nullptr)
		*SizeY = Parms.SizeY;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
// (Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           Component                                                        (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UTextureRenderTarget2D*      Dest                                                             (Edit, BlueprintVisible, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              AttributeIndex                                                   (ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNiagaraDataInterfaceGrid2DCollection::FillTexture2D(class UTextureRenderTarget2D** Dest, int32* AttributeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid2DCollection", "FillTexture2D");

	Params::UNiagaraDataInterfaceGrid2DCollection_FillTexture2D_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Dest != nullptr)
		*Dest = Parms.Dest;

	if (AttributeIndex != nullptr)
		*AttributeIndex = Parms.AttributeIndex;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           Component                                                        (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UTextureRenderTarget2D*      Dest                                                             (Edit, BlueprintVisible, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TilesX                                                           (Edit, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TilesY                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D(class UTextureRenderTarget2D** Dest, int32* TilesX, int32 TilesY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid2DCollection", "FillRawTexture2D");

	Params::UNiagaraDataInterfaceGrid2DCollection_FillRawTexture2D_Params Parms{};

	Parms.TilesY = TilesY;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Dest != nullptr)
		*Dest = Parms.Dest;

	if (TilesX != nullptr)
		*TilesX = Parms.TilesX;

	return Parms.ReturnValue;

}


// Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader
// (None)

class UClass* UNiagaraDataInterfaceGrid2DCollectionReader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceGrid2DCollectionReader");

	return Clss;
}


// NiagaraDataInterfaceGrid2DCollectionReader Niagara.Default__NiagaraDataInterfaceGrid2DCollectionReader
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceGrid2DCollectionReader* UNiagaraDataInterfaceGrid2DCollectionReader::GetDefaultObj()
{
	static class UNiagaraDataInterfaceGrid2DCollectionReader* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceGrid2DCollectionReader*>(UNiagaraDataInterfaceGrid2DCollectionReader::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceGrid3D
// (None)

class UClass* UNiagaraDataInterfaceGrid3D::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceGrid3D");

	return Clss;
}


// NiagaraDataInterfaceGrid3D Niagara.Default__NiagaraDataInterfaceGrid3D
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceGrid3D* UNiagaraDataInterfaceGrid3D::GetDefaultObj()
{
	static class UNiagaraDataInterfaceGrid3D* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceGrid3D*>(UNiagaraDataInterfaceGrid3D::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceGrid3DCollection
// (None)

class UClass* UNiagaraDataInterfaceGrid3DCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceGrid3DCollection");

	return Clss;
}


// NiagaraDataInterfaceGrid3DCollection Niagara.Default__NiagaraDataInterfaceGrid3DCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceGrid3DCollection* UNiagaraDataInterfaceGrid3DCollection::GetDefaultObj()
{
	static class UNiagaraDataInterfaceGrid3DCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceGrid3DCollection*>(UNiagaraDataInterfaceGrid3DCollection::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           Component                                                        (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              SizeX                                                            (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference)
// int32                              SizeY                                                            (Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// int32                              SizeZ                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config)

int32 UNiagaraDataInterfaceGrid3DCollection::GetTextureSize(int32* SizeX, int32* SizeY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid3DCollection", "GetTextureSize");

	Params::UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SizeX != nullptr)
		*SizeX = Parms.SizeX;

	if (SizeY != nullptr)
		*SizeY = Parms.SizeY;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           Component                                                        (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              SizeX                                                            (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference)
// int32                              SizeY                                                            (Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// int32                              SizeZ                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config)

int32 UNiagaraDataInterfaceGrid3DCollection::GetRawTextureSize(int32* SizeX, int32* SizeY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid3DCollection", "GetRawTextureSize");

	Params::UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SizeX != nullptr)
		*SizeX = Parms.SizeX;

	if (SizeY != nullptr)
		*SizeY = Parms.SizeY;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
// (Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           Component                                                        (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UVolumeTexture*              Dest                                                             (Edit, BlueprintVisible, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              AttributeIndex                                                   (ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNiagaraDataInterfaceGrid3DCollection::FillVolumeTexture(class UVolumeTexture** Dest, int32* AttributeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid3DCollection", "FillVolumeTexture");

	Params::UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Dest != nullptr)
		*Dest = Parms.Dest;

	if (AttributeIndex != nullptr)
		*AttributeIndex = Parms.AttributeIndex;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           Component                                                        (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UVolumeTexture*              Dest                                                             (Edit, BlueprintVisible, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TilesX                                                           (Edit, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TilesY                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TileZ                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNiagaraDataInterfaceGrid3DCollection::FillRawVolumeTexture(class UVolumeTexture** Dest, int32* TilesX, int32 TilesY, int32* TileZ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid3DCollection", "FillRawVolumeTexture");

	Params::UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Params Parms{};

	Parms.TilesY = TilesY;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Dest != nullptr)
		*Dest = Parms.Dest;

	if (TilesX != nullptr)
		*TilesX = Parms.TilesX;

	if (TileZ != nullptr)
		*TileZ = Parms.TileZ;

	return Parms.ReturnValue;

}


// Class Niagara.NiagaraDataInterfaceGrid3DCollectionReader
// (None)

class UClass* UNiagaraDataInterfaceGrid3DCollectionReader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceGrid3DCollectionReader");

	return Clss;
}


// NiagaraDataInterfaceGrid3DCollectionReader Niagara.Default__NiagaraDataInterfaceGrid3DCollectionReader
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceGrid3DCollectionReader* UNiagaraDataInterfaceGrid3DCollectionReader::GetDefaultObj()
{
	static class UNiagaraDataInterfaceGrid3DCollectionReader* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceGrid3DCollectionReader*>(UNiagaraDataInterfaceGrid3DCollectionReader::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceIntRenderTarget2D
// (None)

class UClass* UNiagaraDataInterfaceIntRenderTarget2D::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceIntRenderTarget2D");

	return Clss;
}


// NiagaraDataInterfaceIntRenderTarget2D Niagara.Default__NiagaraDataInterfaceIntRenderTarget2D
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceIntRenderTarget2D* UNiagaraDataInterfaceIntRenderTarget2D::GetDefaultObj()
{
	static class UNiagaraDataInterfaceIntRenderTarget2D* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceIntRenderTarget2D*>(UNiagaraDataInterfaceIntRenderTarget2D::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceLandscape
// (None)

class UClass* UNiagaraDataInterfaceLandscape::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceLandscape");

	return Clss;
}


// NiagaraDataInterfaceLandscape Niagara.Default__NiagaraDataInterfaceLandscape
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceLandscape* UNiagaraDataInterfaceLandscape::GetDefaultObj()
{
	static class UNiagaraDataInterfaceLandscape* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceLandscape*>(UNiagaraDataInterfaceLandscape::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceMeshRendererInfo
// (None)

class UClass* UNiagaraDataInterfaceMeshRendererInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceMeshRendererInfo");

	return Clss;
}


// NiagaraDataInterfaceMeshRendererInfo Niagara.Default__NiagaraDataInterfaceMeshRendererInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceMeshRendererInfo* UNiagaraDataInterfaceMeshRendererInfo::GetDefaultObj()
{
	static class UNiagaraDataInterfaceMeshRendererInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceMeshRendererInfo*>(UNiagaraDataInterfaceMeshRendererInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// (None)

class UClass* UNiagaraDataInterfaceNeighborGrid3D::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceNeighborGrid3D");

	return Clss;
}


// NiagaraDataInterfaceNeighborGrid3D Niagara.Default__NiagaraDataInterfaceNeighborGrid3D
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceNeighborGrid3D* UNiagaraDataInterfaceNeighborGrid3D::GetDefaultObj()
{
	static class UNiagaraDataInterfaceNeighborGrid3D* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceNeighborGrid3D*>(UNiagaraDataInterfaceNeighborGrid3D::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceOcclusion
// (None)

class UClass* UNiagaraDataInterfaceOcclusion::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceOcclusion");

	return Clss;
}


// NiagaraDataInterfaceOcclusion Niagara.Default__NiagaraDataInterfaceOcclusion
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceOcclusion* UNiagaraDataInterfaceOcclusion::GetDefaultObj()
{
	static class UNiagaraDataInterfaceOcclusion* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceOcclusion*>(UNiagaraDataInterfaceOcclusion::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceParticleRead
// (None)

class UClass* UNiagaraDataInterfaceParticleRead::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceParticleRead");

	return Clss;
}


// NiagaraDataInterfaceParticleRead Niagara.Default__NiagaraDataInterfaceParticleRead
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceParticleRead* UNiagaraDataInterfaceParticleRead::GetDefaultObj()
{
	static class UNiagaraDataInterfaceParticleRead* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceParticleRead*>(UNiagaraDataInterfaceParticleRead::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfacePlatformSet
// (None)

class UClass* UNiagaraDataInterfacePlatformSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfacePlatformSet");

	return Clss;
}


// NiagaraDataInterfacePlatformSet Niagara.Default__NiagaraDataInterfacePlatformSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfacePlatformSet* UNiagaraDataInterfacePlatformSet::GetDefaultObj()
{
	static class UNiagaraDataInterfacePlatformSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfacePlatformSet*>(UNiagaraDataInterfacePlatformSet::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceRasterizationGrid3D
// (None)

class UClass* UNiagaraDataInterfaceRasterizationGrid3D::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceRasterizationGrid3D");

	return Clss;
}


// NiagaraDataInterfaceRasterizationGrid3D Niagara.Default__NiagaraDataInterfaceRasterizationGrid3D
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceRasterizationGrid3D* UNiagaraDataInterfaceRasterizationGrid3D::GetDefaultObj()
{
	static class UNiagaraDataInterfaceRasterizationGrid3D* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceRasterizationGrid3D*>(UNiagaraDataInterfaceRasterizationGrid3D::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceRenderTarget2D
// (None)

class UClass* UNiagaraDataInterfaceRenderTarget2D::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceRenderTarget2D");

	return Clss;
}


// NiagaraDataInterfaceRenderTarget2D Niagara.Default__NiagaraDataInterfaceRenderTarget2D
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceRenderTarget2D* UNiagaraDataInterfaceRenderTarget2D::GetDefaultObj()
{
	static class UNiagaraDataInterfaceRenderTarget2D* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceRenderTarget2D*>(UNiagaraDataInterfaceRenderTarget2D::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceRenderTarget2DArray
// (None)

class UClass* UNiagaraDataInterfaceRenderTarget2DArray::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceRenderTarget2DArray");

	return Clss;
}


// NiagaraDataInterfaceRenderTarget2DArray Niagara.Default__NiagaraDataInterfaceRenderTarget2DArray
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceRenderTarget2DArray* UNiagaraDataInterfaceRenderTarget2DArray::GetDefaultObj()
{
	static class UNiagaraDataInterfaceRenderTarget2DArray* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceRenderTarget2DArray*>(UNiagaraDataInterfaceRenderTarget2DArray::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceRenderTargetCube
// (None)

class UClass* UNiagaraDataInterfaceRenderTargetCube::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceRenderTargetCube");

	return Clss;
}


// NiagaraDataInterfaceRenderTargetCube Niagara.Default__NiagaraDataInterfaceRenderTargetCube
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceRenderTargetCube* UNiagaraDataInterfaceRenderTargetCube::GetDefaultObj()
{
	static class UNiagaraDataInterfaceRenderTargetCube* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceRenderTargetCube*>(UNiagaraDataInterfaceRenderTargetCube::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceRenderTargetVolume
// (None)

class UClass* UNiagaraDataInterfaceRenderTargetVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceRenderTargetVolume");

	return Clss;
}


// NiagaraDataInterfaceRenderTargetVolume Niagara.Default__NiagaraDataInterfaceRenderTargetVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceRenderTargetVolume* UNiagaraDataInterfaceRenderTargetVolume::GetDefaultObj()
{
	static class UNiagaraDataInterfaceRenderTargetVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceRenderTargetVolume*>(UNiagaraDataInterfaceRenderTargetVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceRigidMeshCollisionQuery
// (None)

class UClass* UNiagaraDataInterfaceRigidMeshCollisionQuery::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceRigidMeshCollisionQuery");

	return Clss;
}


// NiagaraDataInterfaceRigidMeshCollisionQuery Niagara.Default__NiagaraDataInterfaceRigidMeshCollisionQuery
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceRigidMeshCollisionQuery* UNiagaraDataInterfaceRigidMeshCollisionQuery::GetDefaultObj()
{
	static class UNiagaraDataInterfaceRigidMeshCollisionQuery* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceRigidMeshCollisionQuery*>(UNiagaraDataInterfaceRigidMeshCollisionQuery::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary
// (None)

class UClass* UNiagaraDIRigidMeshCollisionFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDIRigidMeshCollisionFunctionLibrary");

	return Clss;
}


// NiagaraDIRigidMeshCollisionFunctionLibrary Niagara.Default__NiagaraDIRigidMeshCollisionFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDIRigidMeshCollisionFunctionLibrary* UNiagaraDIRigidMeshCollisionFunctionLibrary::GetDefaultObj()
{
	static class UNiagaraDIRigidMeshCollisionFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDIRigidMeshCollisionFunctionLibrary*>(UNiagaraDIRigidMeshCollisionFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary.SetSourceActors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FName                        OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class AActor*>              SourceActors                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FName UNiagaraDIRigidMeshCollisionFunctionLibrary::SetSourceActors(class UNiagaraComponent* NiagaraSystem, TArray<class AActor*>* SourceActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDIRigidMeshCollisionFunctionLibrary", "SetSourceActors");

	Params::UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SourceActors != nullptr)
		*SourceActors = std::move(Parms.SourceActors);

	return Parms.ReturnValue;

}


// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// (None)

class UClass* UNiagaraDataInterfaceSkeletalMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceSkeletalMesh");

	return Clss;
}


// NiagaraDataInterfaceSkeletalMesh Niagara.Default__NiagaraDataInterfaceSkeletalMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceSkeletalMesh* UNiagaraDataInterfaceSkeletalMesh::GetDefaultObj()
{
	static class UNiagaraDataInterfaceSkeletalMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceSkeletalMesh*>(UNiagaraDataInterfaceSkeletalMesh::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraDataInterfaceSkeletalMesh.OnSourceEndPlay
// (Final, Native, Protected)
// Parameters:
// class AActor*                      InSource                                                         (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EEndPlayReason          Reason                                                           (Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

class AActor* UNiagaraDataInterfaceSkeletalMesh::OnSourceEndPlay(enum class EEndPlayReason* Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceSkeletalMesh", "OnSourceEndPlay");

	Params::UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Reason != nullptr)
		*Reason = Parms.Reason;

	return Parms.ReturnValue;

}


// Class Niagara.NiagaraDataInterfaceSpline
// (None)

class UClass* UNiagaraDataInterfaceSpline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceSpline");

	return Clss;
}


// NiagaraDataInterfaceSpline Niagara.Default__NiagaraDataInterfaceSpline
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceSpline* UNiagaraDataInterfaceSpline::GetDefaultObj()
{
	static class UNiagaraDataInterfaceSpline* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceSpline*>(UNiagaraDataInterfaceSpline::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceSpriteRendererInfo
// (None)

class UClass* UNiagaraDataInterfaceSpriteRendererInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceSpriteRendererInfo");

	return Clss;
}


// NiagaraDataInterfaceSpriteRendererInfo Niagara.Default__NiagaraDataInterfaceSpriteRendererInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceSpriteRendererInfo* UNiagaraDataInterfaceSpriteRendererInfo::GetDefaultObj()
{
	static class UNiagaraDataInterfaceSpriteRendererInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceSpriteRendererInfo*>(UNiagaraDataInterfaceSpriteRendererInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceTexture
// (None)

class UClass* UNiagaraDataInterfaceTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceTexture");

	return Clss;
}


// NiagaraDataInterfaceTexture Niagara.Default__NiagaraDataInterfaceTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceTexture* UNiagaraDataInterfaceTexture::GetDefaultObj()
{
	static class UNiagaraDataInterfaceTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceTexture*>(UNiagaraDataInterfaceTexture::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceVector2DCurve
// (None)

class UClass* UNiagaraDataInterfaceVector2DCurve::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceVector2DCurve");

	return Clss;
}


// NiagaraDataInterfaceVector2DCurve Niagara.Default__NiagaraDataInterfaceVector2DCurve
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceVector2DCurve* UNiagaraDataInterfaceVector2DCurve::GetDefaultObj()
{
	static class UNiagaraDataInterfaceVector2DCurve* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceVector2DCurve*>(UNiagaraDataInterfaceVector2DCurve::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceVector4Curve
// (None)

class UClass* UNiagaraDataInterfaceVector4Curve::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceVector4Curve");

	return Clss;
}


// NiagaraDataInterfaceVector4Curve Niagara.Default__NiagaraDataInterfaceVector4Curve
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceVector4Curve* UNiagaraDataInterfaceVector4Curve::GetDefaultObj()
{
	static class UNiagaraDataInterfaceVector4Curve* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceVector4Curve*>(UNiagaraDataInterfaceVector4Curve::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceVectorCurve
// (None)

class UClass* UNiagaraDataInterfaceVectorCurve::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceVectorCurve");

	return Clss;
}


// NiagaraDataInterfaceVectorCurve Niagara.Default__NiagaraDataInterfaceVectorCurve
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceVectorCurve* UNiagaraDataInterfaceVectorCurve::GetDefaultObj()
{
	static class UNiagaraDataInterfaceVectorCurve* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceVectorCurve*>(UNiagaraDataInterfaceVectorCurve::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceVectorField
// (None)

class UClass* UNiagaraDataInterfaceVectorField::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceVectorField");

	return Clss;
}


// NiagaraDataInterfaceVectorField Niagara.Default__NiagaraDataInterfaceVectorField
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceVectorField* UNiagaraDataInterfaceVectorField::GetDefaultObj()
{
	static class UNiagaraDataInterfaceVectorField* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceVectorField*>(UNiagaraDataInterfaceVectorField::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceVolumeCache
// (None)

class UClass* UNiagaraDataInterfaceVolumeCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceVolumeCache");

	return Clss;
}


// NiagaraDataInterfaceVolumeCache Niagara.Default__NiagaraDataInterfaceVolumeCache
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceVolumeCache* UNiagaraDataInterfaceVolumeCache::GetDefaultObj()
{
	static class UNiagaraDataInterfaceVolumeCache* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceVolumeCache*>(UNiagaraDataInterfaceVolumeCache::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceVolumeTexture
// (None)

class UClass* UNiagaraDataInterfaceVolumeTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceVolumeTexture");

	return Clss;
}


// NiagaraDataInterfaceVolumeTexture Niagara.Default__NiagaraDataInterfaceVolumeTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceVolumeTexture* UNiagaraDataInterfaceVolumeTexture::GetDefaultObj()
{
	static class UNiagaraDataInterfaceVolumeTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceVolumeTexture*>(UNiagaraDataInterfaceVolumeTexture::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDebugHUDSettings
// (None)

class UClass* UNiagaraDebugHUDSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDebugHUDSettings");

	return Clss;
}


// NiagaraDebugHUDSettings Niagara.Default__NiagaraDebugHUDSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDebugHUDSettings* UNiagaraDebugHUDSettings::GetDefaultObj()
{
	static class UNiagaraDebugHUDSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDebugHUDSettings*>(UNiagaraDebugHUDSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDecalRendererProperties
// (None)

class UClass* UNiagaraDecalRendererProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDecalRendererProperties");

	return Clss;
}


// NiagaraDecalRendererProperties Niagara.Default__NiagaraDecalRendererProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDecalRendererProperties* UNiagaraDecalRendererProperties::GetDefaultObj()
{
	static class UNiagaraDecalRendererProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDecalRendererProperties*>(UNiagaraDecalRendererProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraEditorDataBase
// (None)

class UClass* UNiagaraEditorDataBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraEditorDataBase");

	return Clss;
}


// NiagaraEditorDataBase Niagara.Default__NiagaraEditorDataBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraEditorDataBase* UNiagaraEditorDataBase::GetDefaultObj()
{
	static class UNiagaraEditorDataBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraEditorDataBase*>(UNiagaraEditorDataBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraEditorParametersAdapterBase
// (None)

class UClass* UNiagaraEditorParametersAdapterBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraEditorParametersAdapterBase");

	return Clss;
}


// NiagaraEditorParametersAdapterBase Niagara.Default__NiagaraEditorParametersAdapterBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraEditorParametersAdapterBase* UNiagaraEditorParametersAdapterBase::GetDefaultObj()
{
	static class UNiagaraEditorParametersAdapterBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraEditorParametersAdapterBase*>(UNiagaraEditorParametersAdapterBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraSignificanceHandler
// (None)

class UClass* UNiagaraSignificanceHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraSignificanceHandler");

	return Clss;
}


// NiagaraSignificanceHandler Niagara.Default__NiagaraSignificanceHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraSignificanceHandler* UNiagaraSignificanceHandler::GetDefaultObj()
{
	static class UNiagaraSignificanceHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraSignificanceHandler*>(UNiagaraSignificanceHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraSignificanceHandlerDistance
// (None)

class UClass* UNiagaraSignificanceHandlerDistance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraSignificanceHandlerDistance");

	return Clss;
}


// NiagaraSignificanceHandlerDistance Niagara.Default__NiagaraSignificanceHandlerDistance
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraSignificanceHandlerDistance* UNiagaraSignificanceHandlerDistance::GetDefaultObj()
{
	static class UNiagaraSignificanceHandlerDistance* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraSignificanceHandlerDistance*>(UNiagaraSignificanceHandlerDistance::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraSignificanceHandlerAge
// (None)

class UClass* UNiagaraSignificanceHandlerAge::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraSignificanceHandlerAge");

	return Clss;
}


// NiagaraSignificanceHandlerAge Niagara.Default__NiagaraSignificanceHandlerAge
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraSignificanceHandlerAge* UNiagaraSignificanceHandlerAge::GetDefaultObj()
{
	static class UNiagaraSignificanceHandlerAge* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraSignificanceHandlerAge*>(UNiagaraSignificanceHandlerAge::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraEffectType
// (None)

class UClass* UNiagaraEffectType::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraEffectType");

	return Clss;
}


// NiagaraEffectType Niagara.Default__NiagaraEffectType
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraEffectType* UNiagaraEffectType::GetDefaultObj()
{
	static class UNiagaraEffectType* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraEffectType*>(UNiagaraEffectType::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraEmitter
// (None)

class UClass* UNiagaraEmitter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraEmitter");

	return Clss;
}


// NiagaraEmitter Niagara.Default__NiagaraEmitter
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraEmitter* UNiagaraEmitter::GetDefaultObj()
{
	static class UNiagaraEmitter* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraEmitter*>(UNiagaraEmitter::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraEventReceiverEmitterAction
// (None)

class UClass* UNiagaraEventReceiverEmitterAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraEventReceiverEmitterAction");

	return Clss;
}


// NiagaraEventReceiverEmitterAction Niagara.Default__NiagaraEventReceiverEmitterAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraEventReceiverEmitterAction* UNiagaraEventReceiverEmitterAction::GetDefaultObj()
{
	static class UNiagaraEventReceiverEmitterAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraEventReceiverEmitterAction*>(UNiagaraEventReceiverEmitterAction::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// (None)

class UClass* UNiagaraEventReceiverEmitterAction_SpawnParticles::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraEventReceiverEmitterAction_SpawnParticles");

	return Clss;
}


// NiagaraEventReceiverEmitterAction_SpawnParticles Niagara.Default__NiagaraEventReceiverEmitterAction_SpawnParticles
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraEventReceiverEmitterAction_SpawnParticles* UNiagaraEventReceiverEmitterAction_SpawnParticles::GetDefaultObj()
{
	static class UNiagaraEventReceiverEmitterAction_SpawnParticles* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraEventReceiverEmitterAction_SpawnParticles*>(UNiagaraEventReceiverEmitterAction_SpawnParticles::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraFunctionLibrary
// (None)

class UClass* UNiagaraFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraFunctionLibrary");

	return Clss;
}


// NiagaraFunctionLibrary Niagara.Default__NiagaraFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraFunctionLibrary* UNiagaraFunctionLibrary::GetDefaultObj()
{
	static class UNiagaraFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraFunctionLibrary*>(UNiagaraFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttachedWithParams
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFXSystemSpawnParameters    SpawnParams                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UNiagaraComponent*           ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAttachedWithParams()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SpawnSystemAttachedWithParams");

	Params::UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraSystem*              SystemTemplate                                                   (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class USceneComponent*             AttachToComponent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        AttachPointName                                                  (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FRotator                    Rotation                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
// enum class EAttachLocation         LocationType                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bAutoDestroy                                                     (ConstParm, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bAutoActivate                                                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ENCPoolMethod           PoolingMethod                                                    (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPreCullCheck                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDontSpawnOutOfView                                              (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bAllowSpawnLoopingFX                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UNiagaraComponent*           ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAttached(class USceneComponent* AttachToComponent, struct FVector* Location, struct FRotator* Rotation, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SpawnSystemAttached");

	Params::UNiagaraFunctionLibrary_SpawnSystemAttached_Params Parms{};

	Parms.AttachToComponent = AttachToComponent;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocationWithParams
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFXSystemSpawnParameters    SpawnParams                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UNiagaraComponent*           ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAtLocationWithParams()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SpawnSystemAtLocationWithParams");

	Params::UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UNiagaraSystem*              SystemTemplate                                                   (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FRotator                    Rotation                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FVector                     Scale                                                            (Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
// bool                               bAutoDestroy                                                     (ConstParm, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bAutoActivate                                                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ENCPoolMethod           PoolingMethod                                                    (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPreCullCheck                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDontSpawnOutOfView                                              (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DontSpawnOutOfViewCheckRadius                                    (ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bAllowSpawnLoopingFX                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UNiagaraComponent*           ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAtLocation(struct FVector* Location, struct FRotator* Rotation, const struct FVector& Scale, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SpawnSystemAtLocation");

	Params::UNiagaraFunctionLibrary_SpawnSystemAtLocation_Params Parms{};

	Parms.Scale = Scale;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FString                      OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UVolumeTexture*              Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)

class UVolumeTexture* UNiagaraFunctionLibrary::SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SetVolumeTextureObject");

	Params::UNiagaraFunctionLibrary_SetVolumeTextureObject_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.SetTextureObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FString                      OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UTexture*                    Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)

class UTexture* UNiagaraFunctionLibrary::SetTextureObject(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SetTextureObject");

	Params::UNiagaraFunctionLibrary_SetTextureObject_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FString                      OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2DArray*             Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)

class UTexture2DArray* UNiagaraFunctionLibrary::SetTexture2DArrayObject(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SetTexture2DArrayObject");

	Params::UNiagaraFunctionLibrary_SetTexture2DArrayObject_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FString                      OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FName>                SamplingRegions                                                  (ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<class FName> UNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SetSkeletalMeshDataInterfaceSamplingRegions");

	Params::UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredSockets
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FString                      OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FName>                FilteredSockets                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

TArray<class FName> UNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceFilteredSockets(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SetSkeletalMeshDataInterfaceFilteredSockets");

	Params::UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredBones
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FString                      OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FName>                FilteredBones                                                    (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

TArray<class FName> UNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceFilteredBones(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SetSkeletalMeshDataInterfaceFilteredBones");

	Params::UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.SetComponentNiagaraGPURayTracedCollisionGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UPrimitiveComponent*         Primitive                                                        (Edit, ExportObject, Net, EditFixedSize, Parm, Config, EditConst)
// int32                              CollisionGroup                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 UNiagaraFunctionLibrary::SetComponentNiagaraGPURayTracedCollisionGroup(class UPrimitiveComponent* Primitive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SetComponentNiagaraGPURayTracedCollisionGroup");

	Params::UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Params Parms{};

	Parms.Primitive = Primitive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.SetActorNiagaraGPURayTracedCollisionGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// int32                              CollisionGroup                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 UNiagaraFunctionLibrary::SetActorNiagaraGPURayTracedCollisionGroup(class AActor** Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SetActorNiagaraGPURayTracedCollisionGroup");

	Params::UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.ReleaseNiagaraGPURayTracedCollisionGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              CollisionGroup                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 UNiagaraFunctionLibrary::ReleaseNiagaraGPURayTracedCollisionGroup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "ReleaseNiagaraGPURayTracedCollisionGroup");

	Params::UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FString                      OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UStaticMeshComponent*        StaticMeshComponent                                              (Edit, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)

class UStaticMeshComponent* UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "OverrideSystemUserVariableStaticMeshComponent");

	Params::UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FString                      OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UStaticMesh*                 StaticMesh                                                       (ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)

class FString UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, class UStaticMesh** StaticMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "OverrideSystemUserVariableStaticMesh");

	Params::UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StaticMesh != nullptr)
		*StaticMesh = Parms.StaticMesh;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst)
// class FString                      OverrideName                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

class FString UNiagaraFunctionLibrary::OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "OverrideSystemUserVariableSkeletalMeshComponent");

	Params::UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.SkeletalMeshComponent = SkeletalMeshComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UNiagaraParameterCollection* Collection                                                       (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
// class UNiagaraParameterCollectionInstance*ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UNiagaraParameterCollectionInstance* UNiagaraFunctionLibrary::GetNiagaraParameterCollection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "GetNiagaraParameterCollection");

	Params::UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.AcquireNiagaraGPURayTracedCollisionGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UNiagaraFunctionLibrary::AcquireNiagaraGPURayTracedCollisionGroup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "AcquireNiagaraGPURayTracedCollisionGroup");

	Params::UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Niagara.NiagaraLensEffectBase
// (Actor)

class UClass* ANiagaraLensEffectBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraLensEffectBase");

	return Clss;
}


// NiagaraLensEffectBase Niagara.Default__NiagaraLensEffectBase
// (Public, ClassDefaultObject, ArchetypeObject)

class ANiagaraLensEffectBase* ANiagaraLensEffectBase::GetDefaultObj()
{
	static class ANiagaraLensEffectBase* Default = nullptr;

	if (!Default)
		Default = static_cast<ANiagaraLensEffectBase*>(ANiagaraLensEffectBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraLightRendererProperties
// (None)

class UClass* UNiagaraLightRendererProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraLightRendererProperties");

	return Clss;
}


// NiagaraLightRendererProperties Niagara.Default__NiagaraLightRendererProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraLightRendererProperties* UNiagaraLightRendererProperties::GetDefaultObj()
{
	static class UNiagaraLightRendererProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraLightRendererProperties*>(UNiagaraLightRendererProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraMeshRendererProperties
// (None)

class UClass* UNiagaraMeshRendererProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraMeshRendererProperties");

	return Clss;
}


// NiagaraMeshRendererProperties Niagara.Default__NiagaraMeshRendererProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraMeshRendererProperties* UNiagaraMeshRendererProperties::GetDefaultObj()
{
	static class UNiagaraMeshRendererProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraMeshRendererProperties*>(UNiagaraMeshRendererProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraParameterCollectionInstance
// (None)

class UClass* UNiagaraParameterCollectionInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraParameterCollectionInstance");

	return Clss;
}


// NiagaraParameterCollectionInstance Niagara.Default__NiagaraParameterCollectionInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraParameterCollectionInstance* UNiagaraParameterCollectionInstance::GetDefaultObj()
{
	static class UNiagaraParameterCollectionInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraParameterCollectionInstance*>(UNiagaraParameterCollectionInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector                     InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FVector UNiagaraParameterCollectionInstance::SetVectorParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetVectorParameter");

	Params::UNiagaraParameterCollectionInstance_SetVectorParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector4                    InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FVector4 UNiagaraParameterCollectionInstance::SetVector4Parameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetVector4Parameter");

	Params::UNiagaraParameterCollectionInstance_SetVector4Parameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector2D                   InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FVector2D UNiagaraParameterCollectionInstance::SetVector2DParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetVector2DParameter");

	Params::UNiagaraParameterCollectionInstance_SetVector2DParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FQuat                       InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FQuat UNiagaraParameterCollectionInstance::SetQuatParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetQuatParameter");

	Params::UNiagaraParameterCollectionInstance_SetQuatParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int32                              InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

int32 UNiagaraParameterCollectionInstance::SetIntParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetIntParameter");

	Params::UNiagaraParameterCollectionInstance_SetIntParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// float                              InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float UNiagaraParameterCollectionInstance::SetFloatParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetFloatParameter");

	Params::UNiagaraParameterCollectionInstance_SetFloatParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FLinearColor                InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FLinearColor UNiagaraParameterCollectionInstance::SetColorParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetColorParameter");

	Params::UNiagaraParameterCollectionInstance_SetColorParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

bool UNiagaraParameterCollectionInstance::SetBoolParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetBoolParameter");

	Params::UNiagaraParameterCollectionInstance_SetBoolParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UNiagaraParameterCollectionInstance::GetVectorParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetVectorParameter");

	Params::UNiagaraParameterCollectionInstance_GetVectorParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector4                    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector4 UNiagaraParameterCollectionInstance::GetVector4Parameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetVector4Parameter");

	Params::UNiagaraParameterCollectionInstance_GetVector4Parameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D UNiagaraParameterCollectionInstance::GetVector2DParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetVector2DParameter");

	Params::UNiagaraParameterCollectionInstance_GetVector2DParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FQuat                       ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FQuat UNiagaraParameterCollectionInstance::GetQuatParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetQuatParameter");

	Params::UNiagaraParameterCollectionInstance_GetQuatParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UNiagaraParameterCollectionInstance::GetIntParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetIntParameter");

	Params::UNiagaraParameterCollectionInstance_GetIntParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UNiagaraParameterCollectionInstance::GetFloatParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetFloatParameter");

	Params::UNiagaraParameterCollectionInstance_GetFloatParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FLinearColor                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FLinearColor UNiagaraParameterCollectionInstance::GetColorParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetColorParameter");

	Params::UNiagaraParameterCollectionInstance_GetColorParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNiagaraParameterCollectionInstance::GetBoolParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetBoolParameter");

	Params::UNiagaraParameterCollectionInstance_GetBoolParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Niagara.NiagaraParameterCollection
// (None)

class UClass* UNiagaraParameterCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraParameterCollection");

	return Clss;
}


// NiagaraParameterCollection Niagara.Default__NiagaraParameterCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraParameterCollection* UNiagaraParameterCollection::GetDefaultObj()
{
	static class UNiagaraParameterCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraParameterCollection*>(UNiagaraParameterCollection::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraBaselineController
// (None)

class UClass* UNiagaraBaselineController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraBaselineController");

	return Clss;
}


// NiagaraBaselineController Niagara.Default__NiagaraBaselineController
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraBaselineController* UNiagaraBaselineController::GetDefaultObj()
{
	static class UNiagaraBaselineController* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraBaselineController*>(UNiagaraBaselineController::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraBaselineController.OnTickTest
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNiagaraBaselineController::OnTickTest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraBaselineController", "OnTickTest");

	Params::UNiagaraBaselineController_OnTickTest_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraBaselineController.OnOwnerTick
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNiagaraBaselineController::OnOwnerTick(float* DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraBaselineController", "OnOwnerTick");

	Params::UNiagaraBaselineController_OnOwnerTick_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DeltaTime != nullptr)
		*DeltaTime = Parms.DeltaTime;

}


// Function Niagara.NiagaraBaselineController.OnEndTest
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FNiagaraPerfBaselineStats   Stats                                                            (ConstParm, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UNiagaraBaselineController::OnEndTest(const struct FNiagaraPerfBaselineStats& Stats)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraBaselineController", "OnEndTest");

	Params::UNiagaraBaselineController_OnEndTest_Params Parms{};

	Parms.Stats = Stats;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraBaselineController.OnBeginTest
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UNiagaraBaselineController::OnBeginTest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraBaselineController", "OnBeginTest");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraBaselineController.GetSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraSystem*              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UNiagaraSystem* UNiagaraBaselineController::GetSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraBaselineController", "GetSystem");

	Params::UNiagaraBaselineController_GetSystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Niagara.NiagaraBaselineController_Basic
// (None)

class UClass* UNiagaraBaselineController_Basic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraBaselineController_Basic");

	return Clss;
}


// NiagaraBaselineController_Basic Niagara.Default__NiagaraBaselineController_Basic
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraBaselineController_Basic* UNiagaraBaselineController_Basic::GetDefaultObj()
{
	static class UNiagaraBaselineController_Basic* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraBaselineController_Basic*>(UNiagaraBaselineController_Basic::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraPerfBaselineActor
// (Actor)

class UClass* ANiagaraPerfBaselineActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraPerfBaselineActor");

	return Clss;
}


// NiagaraPerfBaselineActor Niagara.Default__NiagaraPerfBaselineActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ANiagaraPerfBaselineActor* ANiagaraPerfBaselineActor::GetDefaultObj()
{
	static class ANiagaraPerfBaselineActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ANiagaraPerfBaselineActor*>(ANiagaraPerfBaselineActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraPrecompileContainer
// (None)

class UClass* UNiagaraPrecompileContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraPrecompileContainer");

	return Clss;
}


// NiagaraPrecompileContainer Niagara.Default__NiagaraPrecompileContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraPrecompileContainer* UNiagaraPrecompileContainer::GetDefaultObj()
{
	static class UNiagaraPrecompileContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraPrecompileContainer*>(UNiagaraPrecompileContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraPreviewBase
// (Actor)

class UClass* ANiagaraPreviewBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraPreviewBase");

	return Clss;
}


// NiagaraPreviewBase Niagara.Default__NiagaraPreviewBase
// (Public, ClassDefaultObject, ArchetypeObject)

class ANiagaraPreviewBase* ANiagaraPreviewBase::GetDefaultObj()
{
	static class ANiagaraPreviewBase* Default = nullptr;

	if (!Default)
		Default = static_cast<ANiagaraPreviewBase*>(ANiagaraPreviewBase::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraPreviewBase.SetSystem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*              InSystem                                                         (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void ANiagaraPreviewBase::SetSystem(class UNiagaraSystem* InSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraPreviewBase", "SetSystem");

	Params::ANiagaraPreviewBase_SetSystem_Params Parms{};

	Parms.InSystem = InSystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Niagara.NiagaraPreviewBase.SetLabelText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InXAxisText                                                      (Edit, ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        InYAxisText                                                      (BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void ANiagaraPreviewBase::SetLabelText(class FText InXAxisText, class FText InYAxisText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraPreviewBase", "SetLabelText");

	Params::ANiagaraPreviewBase_SetLabelText_Params Parms{};

	Parms.InXAxisText = InXAxisText;
	Parms.InYAxisText = InYAxisText;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Niagara.NiagaraPreviewAxis
// (None)

class UClass* UNiagaraPreviewAxis::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraPreviewAxis");

	return Clss;
}


// NiagaraPreviewAxis Niagara.Default__NiagaraPreviewAxis
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraPreviewAxis* UNiagaraPreviewAxis::GetDefaultObj()
{
	static class UNiagaraPreviewAxis* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraPreviewAxis*>(UNiagaraPreviewAxis::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraPreviewAxis.Num
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UNiagaraPreviewAxis::Num()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraPreviewAxis", "Num");

	Params::UNiagaraPreviewAxis_Num_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraPreviewAxis.ApplyToPreview
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           PreviewComponent                                                 (ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              PreviewIndex                                                     (Edit, ConstParm, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsXAxis                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      OutLabelText                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UNiagaraPreviewAxis::ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32 PreviewIndex, bool bIsXAxis, const class FString& OutLabelText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraPreviewAxis", "ApplyToPreview");

	Params::UNiagaraPreviewAxis_ApplyToPreview_Params Parms{};

	Parms.PreviewComponent = PreviewComponent;
	Parms.PreviewIndex = PreviewIndex;
	Parms.bIsXAxis = bIsXAxis;
	Parms.OutLabelText = OutLabelText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// (None)

class UClass* UNiagaraPreviewAxis_InterpParamBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraPreviewAxis_InterpParamBase");

	return Clss;
}


// NiagaraPreviewAxis_InterpParamBase Niagara.Default__NiagaraPreviewAxis_InterpParamBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraPreviewAxis_InterpParamBase* UNiagaraPreviewAxis_InterpParamBase::GetDefaultObj()
{
	static class UNiagaraPreviewAxis_InterpParamBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraPreviewAxis_InterpParamBase*>(UNiagaraPreviewAxis_InterpParamBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// (None)

class UClass* UNiagaraPreviewAxis_InterpParamInt32::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraPreviewAxis_InterpParamInt32");

	return Clss;
}


// NiagaraPreviewAxis_InterpParamInt32 Niagara.Default__NiagaraPreviewAxis_InterpParamInt32
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraPreviewAxis_InterpParamInt32* UNiagaraPreviewAxis_InterpParamInt32::GetDefaultObj()
{
	static class UNiagaraPreviewAxis_InterpParamInt32* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraPreviewAxis_InterpParamInt32*>(UNiagaraPreviewAxis_InterpParamInt32::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// (None)

class UClass* UNiagaraPreviewAxis_InterpParamFloat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraPreviewAxis_InterpParamFloat");

	return Clss;
}


// NiagaraPreviewAxis_InterpParamFloat Niagara.Default__NiagaraPreviewAxis_InterpParamFloat
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraPreviewAxis_InterpParamFloat* UNiagaraPreviewAxis_InterpParamFloat::GetDefaultObj()
{
	static class UNiagaraPreviewAxis_InterpParamFloat* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraPreviewAxis_InterpParamFloat*>(UNiagaraPreviewAxis_InterpParamFloat::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// (None)

class UClass* UNiagaraPreviewAxis_InterpParamVector2D::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraPreviewAxis_InterpParamVector2D");

	return Clss;
}


// NiagaraPreviewAxis_InterpParamVector2D Niagara.Default__NiagaraPreviewAxis_InterpParamVector2D
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraPreviewAxis_InterpParamVector2D* UNiagaraPreviewAxis_InterpParamVector2D::GetDefaultObj()
{
	static class UNiagaraPreviewAxis_InterpParamVector2D* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraPreviewAxis_InterpParamVector2D*>(UNiagaraPreviewAxis_InterpParamVector2D::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// (None)

class UClass* UNiagaraPreviewAxis_InterpParamVector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraPreviewAxis_InterpParamVector");

	return Clss;
}


// NiagaraPreviewAxis_InterpParamVector Niagara.Default__NiagaraPreviewAxis_InterpParamVector
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraPreviewAxis_InterpParamVector* UNiagaraPreviewAxis_InterpParamVector::GetDefaultObj()
{
	static class UNiagaraPreviewAxis_InterpParamVector* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraPreviewAxis_InterpParamVector*>(UNiagaraPreviewAxis_InterpParamVector::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// (None)

class UClass* UNiagaraPreviewAxis_InterpParamVector4::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraPreviewAxis_InterpParamVector4");

	return Clss;
}


// NiagaraPreviewAxis_InterpParamVector4 Niagara.Default__NiagaraPreviewAxis_InterpParamVector4
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraPreviewAxis_InterpParamVector4* UNiagaraPreviewAxis_InterpParamVector4::GetDefaultObj()
{
	static class UNiagaraPreviewAxis_InterpParamVector4* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraPreviewAxis_InterpParamVector4*>(UNiagaraPreviewAxis_InterpParamVector4::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// (None)

class UClass* UNiagaraPreviewAxis_InterpParamLinearColor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraPreviewAxis_InterpParamLinearColor");

	return Clss;
}


// NiagaraPreviewAxis_InterpParamLinearColor Niagara.Default__NiagaraPreviewAxis_InterpParamLinearColor
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraPreviewAxis_InterpParamLinearColor* UNiagaraPreviewAxis_InterpParamLinearColor::GetDefaultObj()
{
	static class UNiagaraPreviewAxis_InterpParamLinearColor* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraPreviewAxis_InterpParamLinearColor*>(UNiagaraPreviewAxis_InterpParamLinearColor::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraPreviewGrid
// (Actor)

class UClass* ANiagaraPreviewGrid::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraPreviewGrid");

	return Clss;
}


// NiagaraPreviewGrid Niagara.Default__NiagaraPreviewGrid
// (Public, ClassDefaultObject, ArchetypeObject)

class ANiagaraPreviewGrid* ANiagaraPreviewGrid::GetDefaultObj()
{
	static class ANiagaraPreviewGrid* Default = nullptr;

	if (!Default)
		Default = static_cast<ANiagaraPreviewGrid*>(ANiagaraPreviewGrid::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraPreviewGrid.SetPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bPaused                                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void ANiagaraPreviewGrid::SetPaused(bool bPaused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraPreviewGrid", "SetPaused");

	Params::ANiagaraPreviewGrid_SetPaused_Params Parms{};

	Parms.bPaused = bPaused;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraPreviewGrid.GetPreviews
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UNiagaraComponent*>   OutPreviews                                                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void ANiagaraPreviewGrid::GetPreviews(const TArray<class UNiagaraComponent*>& OutPreviews)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraPreviewGrid", "GetPreviews");

	Params::ANiagaraPreviewGrid_GetPreviews_Params Parms{};

	Parms.OutPreviews = OutPreviews;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraPreviewGrid.DeactivatePreviews
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ANiagaraPreviewGrid::DeactivatePreviews()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraPreviewGrid", "DeactivatePreviews");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraPreviewGrid.ActivatePreviews
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bReset                                                           (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ANiagaraPreviewGrid::ActivatePreviews(bool* bReset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraPreviewGrid", "ActivatePreviews");

	Params::ANiagaraPreviewGrid_ActivatePreviews_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bReset != nullptr)
		*bReset = Parms.bReset;

}


// Class Niagara.NiagaraRibbonRendererProperties
// (None)

class UClass* UNiagaraRibbonRendererProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraRibbonRendererProperties");

	return Clss;
}


// NiagaraRibbonRendererProperties Niagara.Default__NiagaraRibbonRendererProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraRibbonRendererProperties* UNiagaraRibbonRendererProperties::GetDefaultObj()
{
	static class UNiagaraRibbonRendererProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraRibbonRendererProperties*>(UNiagaraRibbonRendererProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraScratchPadContainer
// (None)

class UClass* UNiagaraScratchPadContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraScratchPadContainer");

	return Clss;
}


// NiagaraScratchPadContainer Niagara.Default__NiagaraScratchPadContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraScratchPadContainer* UNiagaraScratchPadContainer::GetDefaultObj()
{
	static class UNiagaraScratchPadContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraScratchPadContainer*>(UNiagaraScratchPadContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraScript
// (None)

class UClass* UNiagaraScript::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraScript");

	return Clss;
}


// NiagaraScript Niagara.Default__NiagaraScript
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraScript* UNiagaraScript::GetDefaultObj()
{
	static class UNiagaraScript* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraScript*>(UNiagaraScript::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
// (Final, Native, Public)
// Parameters:

void UNiagaraScript::RaiseOnGPUCompilationComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraScript", "RaiseOnGPUCompilationComplete");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Niagara.NiagaraSimCache
// (None)

class UClass* UNiagaraSimCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraSimCache");

	return Clss;
}


// NiagaraSimCache Niagara.Default__NiagaraSimCache
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraSimCache* UNiagaraSimCache::GetDefaultObj()
{
	static class UNiagaraSimCache* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraSimCache*>(UNiagaraSimCache::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraSimCache.ReadVectorAttribute
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             OutValues                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        AttributeName                                                    (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FName                        EmitterName                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              FrameIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UNiagaraSimCache::ReadVectorAttribute(const TArray<struct FVector>& OutValues, class FName* AttributeName, class FName EmitterName, int32 FrameIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "ReadVectorAttribute");

	Params::UNiagaraSimCache_ReadVectorAttribute_Params Parms{};

	Parms.OutValues = OutValues;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeName != nullptr)
		*AttributeName = Parms.AttributeName;

}


// Function Niagara.NiagaraSimCache.ReadVector4Attribute
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector4>            OutValues                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        AttributeName                                                    (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FName                        EmitterName                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              FrameIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UNiagaraSimCache::ReadVector4Attribute(const TArray<struct FVector4>& OutValues, class FName* AttributeName, class FName EmitterName, int32 FrameIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "ReadVector4Attribute");

	Params::UNiagaraSimCache_ReadVector4Attribute_Params Parms{};

	Parms.OutValues = OutValues;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeName != nullptr)
		*AttributeName = Parms.AttributeName;

}


// Function Niagara.NiagaraSimCache.ReadVector2Attribute
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector2D>           OutValues                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        AttributeName                                                    (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FName                        EmitterName                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              FrameIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UNiagaraSimCache::ReadVector2Attribute(const TArray<struct FVector2D>& OutValues, class FName* AttributeName, class FName EmitterName, int32 FrameIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "ReadVector2Attribute");

	Params::UNiagaraSimCache_ReadVector2Attribute_Params Parms{};

	Parms.OutValues = OutValues;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeName != nullptr)
		*AttributeName = Parms.AttributeName;

}


// Function Niagara.NiagaraSimCache.ReadQuatAttributeWithRebase
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FQuat>               OutValues                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FQuat                       Quat                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm)
// class FName                        AttributeName                                                    (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FName                        EmitterName                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              FrameIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UNiagaraSimCache::ReadQuatAttributeWithRebase(const TArray<struct FQuat>& OutValues, struct FQuat* Quat, class FName* AttributeName, class FName EmitterName, int32 FrameIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "ReadQuatAttributeWithRebase");

	Params::UNiagaraSimCache_ReadQuatAttributeWithRebase_Params Parms{};

	Parms.OutValues = OutValues;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Quat != nullptr)
		*Quat = std::move(Parms.Quat);

	if (AttributeName != nullptr)
		*AttributeName = Parms.AttributeName;

}


// Function Niagara.NiagaraSimCache.ReadQuatAttribute
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FQuat>               OutValues                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        AttributeName                                                    (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FName                        EmitterName                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bLocalSpaceToWorld                                               (ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              FrameIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UNiagaraSimCache::ReadQuatAttribute(const TArray<struct FQuat>& OutValues, class FName* AttributeName, class FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "ReadQuatAttribute");

	Params::UNiagaraSimCache_ReadQuatAttribute_Params Parms{};

	Parms.OutValues = OutValues;
	Parms.EmitterName = EmitterName;
	Parms.bLocalSpaceToWorld = bLocalSpaceToWorld;
	Parms.FrameIndex = FrameIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeName != nullptr)
		*AttributeName = Parms.AttributeName;

}


// Function Niagara.NiagaraSimCache.ReadPositionAttributeWithRebase
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             OutValues                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// class FName                        AttributeName                                                    (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FName                        EmitterName                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              FrameIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UNiagaraSimCache::ReadPositionAttributeWithRebase(const TArray<struct FVector>& OutValues, struct FTransform* Transform, class FName* AttributeName, class FName EmitterName, int32 FrameIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "ReadPositionAttributeWithRebase");

	Params::UNiagaraSimCache_ReadPositionAttributeWithRebase_Params Parms{};

	Parms.OutValues = OutValues;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (AttributeName != nullptr)
		*AttributeName = Parms.AttributeName;

}


// Function Niagara.NiagaraSimCache.ReadPositionAttribute
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             OutValues                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        AttributeName                                                    (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FName                        EmitterName                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bLocalSpaceToWorld                                               (ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              FrameIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UNiagaraSimCache::ReadPositionAttribute(const TArray<struct FVector>& OutValues, class FName* AttributeName, class FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "ReadPositionAttribute");

	Params::UNiagaraSimCache_ReadPositionAttribute_Params Parms{};

	Parms.OutValues = OutValues;
	Parms.EmitterName = EmitterName;
	Parms.bLocalSpaceToWorld = bLocalSpaceToWorld;
	Parms.FrameIndex = FrameIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeName != nullptr)
		*AttributeName = Parms.AttributeName;

}


// Function Niagara.NiagaraSimCache.ReadIntAttribute
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int32>                      OutValues                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        AttributeName                                                    (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FName                        EmitterName                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              FrameIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UNiagaraSimCache::ReadIntAttribute(const TArray<int32>& OutValues, class FName* AttributeName, class FName EmitterName, int32 FrameIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "ReadIntAttribute");

	Params::UNiagaraSimCache_ReadIntAttribute_Params Parms{};

	Parms.OutValues = OutValues;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeName != nullptr)
		*AttributeName = Parms.AttributeName;

}


// Function Niagara.NiagaraSimCache.ReadFloatAttribute
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<float>                      OutValues                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        AttributeName                                                    (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FName                        EmitterName                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              FrameIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UNiagaraSimCache::ReadFloatAttribute(const TArray<float>& OutValues, class FName* AttributeName, class FName EmitterName, int32 FrameIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "ReadFloatAttribute");

	Params::UNiagaraSimCache_ReadFloatAttribute_Params Parms{};

	Parms.OutValues = OutValues;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeName != nullptr)
		*AttributeName = Parms.AttributeName;

}


// Function Niagara.NiagaraSimCache.ReadColorAttribute
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FLinearColor>        OutValues                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        AttributeName                                                    (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FName                        EmitterName                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              FrameIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UNiagaraSimCache::ReadColorAttribute(const TArray<struct FLinearColor>& OutValues, class FName* AttributeName, class FName EmitterName, int32 FrameIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "ReadColorAttribute");

	Params::UNiagaraSimCache_ReadColorAttribute_Params Parms{};

	Parms.OutValues = OutValues;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeName != nullptr)
		*AttributeName = Parms.AttributeName;

}


// Function Niagara.NiagaraSimCache.IsEmpty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNiagaraSimCache::IsEmpty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "IsEmpty");

	Params::UNiagaraSimCache_IsEmpty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraSimCache.IsCacheValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNiagaraSimCache::IsCacheValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "IsCacheValid");

	Params::UNiagaraSimCache_IsCacheValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraSimCache.GetStartSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UNiagaraSimCache::GetStartSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "GetStartSeconds");

	Params::UNiagaraSimCache_GetStartSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraSimCache.GetNumFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UNiagaraSimCache::GetNumFrames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "GetNumFrames");

	Params::UNiagaraSimCache_GetNumFrames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraSimCache.GetNumEmitters
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UNiagaraSimCache::GetNumEmitters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "GetNumEmitters");

	Params::UNiagaraSimCache_GetNumEmitters_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraSimCache.GetEmitterNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class FName> UNiagaraSimCache::GetEmitterNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "GetEmitterNames");

	Params::UNiagaraSimCache_GetEmitterNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraSimCache.GetEmitterName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              EmitterIndex                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UNiagaraSimCache::GetEmitterName(int32 EmitterIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "GetEmitterName");

	Params::UNiagaraSimCache_GetEmitterName_Params Parms{};

	Parms.EmitterIndex = EmitterIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraSimCache.GetAttributeCaptureMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ENiagaraSimCacheAttributeCaptureModeReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ENiagaraSimCacheAttributeCaptureMode UNiagaraSimCache::GetAttributeCaptureMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "GetAttributeCaptureMode");

	Params::UNiagaraSimCache_GetAttributeCaptureMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Niagara.AsyncNiagaraCaptureSimCache
// (None)

class UClass* UAsyncNiagaraCaptureSimCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AsyncNiagaraCaptureSimCache");

	return Clss;
}


// AsyncNiagaraCaptureSimCache Niagara.Default__AsyncNiagaraCaptureSimCache
// (Public, ClassDefaultObject, ArchetypeObject)

class UAsyncNiagaraCaptureSimCache* UAsyncNiagaraCaptureSimCache::GetDefaultObj()
{
	static class UAsyncNiagaraCaptureSimCache* Default = nullptr;

	if (!Default)
		Default = static_cast<UAsyncNiagaraCaptureSimCache*>(UAsyncNiagaraCaptureSimCache::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction Niagara.AsyncNiagaraCaptureSimCache.OnCaptureComplete__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bSuccess                                                         (ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UAsyncNiagaraCaptureSimCache::OnCaptureComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncNiagaraCaptureSimCache", "OnCaptureComplete__DelegateSignature");

	Params::UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheUntilComplete
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraSimCache*            SimCache                                                         (Edit, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FNiagaraSimCacheCreateParametersCreateParameters                                                 (ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UNiagaraComponent*           NiagaraComponent                                                 (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class UNiagaraSimCache*            OutSimCache                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              CaptureRate                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bAdvanceSimulation                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              AdvanceDeltaTime                                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UAsyncNiagaraCaptureSimCache*ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UAsyncNiagaraCaptureSimCache* UAsyncNiagaraCaptureSimCache::CaptureNiagaraSimCacheUntilComplete(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncNiagaraCaptureSimCache", "CaptureNiagaraSimCacheUntilComplete");

	Params::UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Params Parms{};

	Parms.SimCache = SimCache;
	Parms.CreateParameters = CreateParameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheMultiFrame
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraSimCache*            SimCache                                                         (Edit, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FNiagaraSimCacheCreateParametersCreateParameters                                                 (ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UNiagaraComponent*           NiagaraComponent                                                 (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class UNiagaraSimCache*            OutSimCache                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              NumFrames                                                        (ConstParm, ExportObject, EditFixedSize, DisableEditOnInstance, DuplicateTransient)
// int32                              CaptureRate                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bAdvanceSimulation                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              AdvanceDeltaTime                                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UAsyncNiagaraCaptureSimCache*ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UAsyncNiagaraCaptureSimCache* UAsyncNiagaraCaptureSimCache::CaptureNiagaraSimCacheMultiFrame(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters, int32 NumFrames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncNiagaraCaptureSimCache", "CaptureNiagaraSimCacheMultiFrame");

	Params::UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Params Parms{};

	Parms.SimCache = SimCache;
	Parms.CreateParameters = CreateParameters;
	Parms.NumFrames = NumFrames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Niagara.NiagaraSimCacheFunctionLibrary
// (None)

class UClass* UNiagaraSimCacheFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraSimCacheFunctionLibrary");

	return Clss;
}


// NiagaraSimCacheFunctionLibrary Niagara.Default__NiagaraSimCacheFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraSimCacheFunctionLibrary* UNiagaraSimCacheFunctionLibrary::GetDefaultObj()
{
	static class UNiagaraSimCacheFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraSimCacheFunctionLibrary*>(UNiagaraSimCacheFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraSimCacheFunctionLibrary.CreateNiagaraSimCache
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UNiagaraSimCache*            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UNiagaraSimCache* UNiagaraSimCacheFunctionLibrary::CreateNiagaraSimCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCacheFunctionLibrary", "CreateNiagaraSimCache");

	Params::UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraSimCacheFunctionLibrary.CaptureNiagaraSimCacheImmediate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraSimCache*            SimCache                                                         (Edit, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FNiagaraSimCacheCreateParametersCreateParameters                                                 (ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UNiagaraComponent*           NiagaraComponent                                                 (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class UNiagaraSimCache*            OutSimCache                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bAdvanceSimulation                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              AdvanceDeltaTime                                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNiagaraSimCacheFunctionLibrary::CaptureNiagaraSimCacheImmediate(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCacheFunctionLibrary", "CaptureNiagaraSimCacheImmediate");

	Params::UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Params Parms{};

	Parms.SimCache = SimCache;
	Parms.CreateParameters = CreateParameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Niagara.NiagaraSimulationStageBase
// (None)

class UClass* UNiagaraSimulationStageBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraSimulationStageBase");

	return Clss;
}


// NiagaraSimulationStageBase Niagara.Default__NiagaraSimulationStageBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraSimulationStageBase* UNiagaraSimulationStageBase::GetDefaultObj()
{
	static class UNiagaraSimulationStageBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraSimulationStageBase*>(UNiagaraSimulationStageBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraSimulationStageGeneric
// (None)

class UClass* UNiagaraSimulationStageGeneric::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraSimulationStageGeneric");

	return Clss;
}


// NiagaraSimulationStageGeneric Niagara.Default__NiagaraSimulationStageGeneric
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraSimulationStageGeneric* UNiagaraSimulationStageGeneric::GetDefaultObj()
{
	static class UNiagaraSimulationStageGeneric* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraSimulationStageGeneric*>(UNiagaraSimulationStageGeneric::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraSpriteRendererProperties
// (None)

class UClass* UNiagaraSpriteRendererProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraSpriteRendererProperties");

	return Clss;
}


// NiagaraSpriteRendererProperties Niagara.Default__NiagaraSpriteRendererProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraSpriteRendererProperties* UNiagaraSpriteRendererProperties::GetDefaultObj()
{
	static class UNiagaraSpriteRendererProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraSpriteRendererProperties*>(UNiagaraSpriteRendererProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraSystem
// (None)

class UClass* UNiagaraSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraSystem");

	return Clss;
}


// NiagaraSystem Niagara.Default__NiagaraSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraSystem* UNiagaraSystem::GetDefaultObj()
{
	static class UNiagaraSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraSystem*>(UNiagaraSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraValidationRule
// (None)

class UClass* UNiagaraValidationRule::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraValidationRule");

	return Clss;
}


// NiagaraValidationRule Niagara.Default__NiagaraValidationRule
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraValidationRule* UNiagaraValidationRule::GetDefaultObj()
{
	static class UNiagaraValidationRule* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraValidationRule*>(UNiagaraValidationRule::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.VolumeCache
// (None)

class UClass* UVolumeCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VolumeCache");

	return Clss;
}


// VolumeCache Niagara.Default__VolumeCache
// (Public, ClassDefaultObject, ArchetypeObject)

class UVolumeCache* UVolumeCache::GetDefaultObj()
{
	static class UVolumeCache* Default = nullptr;

	if (!Default)
		Default = static_cast<UVolumeCache*>(UVolumeCache::StaticClass()->DefaultObject);

	return Default;
}

}


