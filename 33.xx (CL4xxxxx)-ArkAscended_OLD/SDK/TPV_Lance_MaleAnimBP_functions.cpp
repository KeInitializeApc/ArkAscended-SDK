#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass TPV_Lance_MaleAnimBP.TPV_Lance_MaleAnimBP_C
// (None)

class UClass* UTPV_Lance_MaleAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TPV_Lance_MaleAnimBP_C");

	return Clss;
}


// TPV_Lance_MaleAnimBP_C TPV_Lance_MaleAnimBP.Default__TPV_Lance_MaleAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTPV_Lance_MaleAnimBP_C* UTPV_Lance_MaleAnimBP_C::GetDefaultObj()
{
	static class UTPV_Lance_MaleAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTPV_Lance_MaleAnimBP_C*>(UTPV_Lance_MaleAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


