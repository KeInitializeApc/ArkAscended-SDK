#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct AssetRegistry.TagAndValue
struct FTagAndValue
{
public:
	class FName                                  Tag;                                               // 0x0(0x8)(ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FString                                Value;                                             // 0x8(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x5 (0x5 - 0x0)
// ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
struct FAssetRegistryDependencyOptions
{
public:
	bool                                         bIncludeSoftPackageReferences;                     // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIncludeHardPackageReferences;                     // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIncludeSearchableNames;                           // 0x2(0x1)(EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIncludeSoftManagementReferences;                  // 0x3(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIncludeHardManagementReferences;                  // 0x4(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


