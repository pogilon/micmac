// File Automatically generated by eLiSe
#include "StdAfx.h"


class cREgDistVal_Polyn4: public cElCompiledFonc
{
   public :

      cREgDistVal_Polyn4();
      void ComputeVal();
      void ComputeValDeriv();
      void ComputeValDerivHessian();
      double * AdrVarLocFromString(const std::string &);
      void SetPolyn4_State_0_0(double);
      void SetPolyn4_State_1_0(double);
      void SetPolyn4_State_2_0(double);
      void SetRegDistKnownVal_x(double);
      void SetRegDistKnownVal_y(double);
      void SetRegDistValP1_x(double);
      void SetRegDistValP1_y(double);


      static cAutoAddEntry  mTheAuto;
      static cElCompiledFonc *  Alloc();
   private :

      double mLocPolyn4_State_0_0;
      double mLocPolyn4_State_1_0;
      double mLocPolyn4_State_2_0;
      double mLocRegDistKnownVal_x;
      double mLocRegDistKnownVal_y;
      double mLocRegDistValP1_x;
      double mLocRegDistValP1_y;
};